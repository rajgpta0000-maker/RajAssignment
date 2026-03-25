#include<stdio.h>
int i,j;
void getarray(int ar[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter array[%d][%d]",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
}
void sumofarray(int a[2][2],int b[2][2],int c[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void printarray(int ar[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n arr[%d][%d]=%d",i,j,ar[i][j]);
		}
		printf("\n");
	}
}
main(){
	int a[2][2],b[2][2],c[2][2];
	getarray(a);
	printarray(a);
	printf("\n===================================\n");
	getarray(b);
	printarray(b);
	printf("\n====================================\n");
	sumofarray(a,b,c);
	printarray(c);
}
