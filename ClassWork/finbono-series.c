#include<stdio.h>
main(){
	int x1=0,x2=1,ans,i;
	printf("\n %d \t ",x1,x2);
	for(i=0;i<=10;i++){
	
	ans=x1+x2;
	printf(" %d \t",ans);
	
	x1=x2;
	x2=ans;
	}
}
