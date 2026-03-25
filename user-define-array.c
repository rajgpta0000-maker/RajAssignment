#include<stdio.h>
main(){
	// datatype arrayname[size];//1 23 4 0 2
	int a[5],sum=0;
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter a [%d]=",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n Sum of all array element=%d",sum);
}
