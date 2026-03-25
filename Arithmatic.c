#include<stdio.h>
main(){
	int a=10,b=3,rem,x=15,y;
	rem=a%b;
	printf("\n rem=%d",rem);
	//post increment=> x value assign to y then incremnet by 1
	y=x++;//increment by 1
	printf("\n y=%d  x=%d",y,x);
	y=++x;//increse by 1 in x then assign to y
	printf("\n y=%d  x=%d",y,x);
}
