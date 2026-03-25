#include<stdio.h>
main(){
	int x=100,num;
	printf("\n sizeof int=%d",sizeof(x));
	printf("\n Enter the num");
	scanf("%d",&num);
	//(condition)?true:flase
	(num>0)?printf("\n positive"):printf("\n negative");
}
