#include<stdio.h>
main(){
	int a=20,b=10;
	printf("\n Enter a :");
	scanf("%d",&a);
	printf("\n Enter b :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d",a+b);
	printf("%d",a-b);
	printf("%d",a-b);

}
