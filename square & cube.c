#include<stdio.h>
 int main(){
	int num;
	int square,cube;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	square = num* num;
	cube = num * num * num;
	
	printf("square of %d = %d\n",num,square);
	printf("cube of %d = %d",num,cube);
}
