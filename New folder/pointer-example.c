#include<stdio.h>
main(){
	int a=10;
	int *ptr=&a;//pointer declare
	printf("\n address=%p and value=%d",ptr,*ptr);//de ref
	
	*ptr=200;
	printf("\n a=%d",a);
}
