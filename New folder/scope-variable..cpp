#include<stdio.h>
float pi=3.14;//global
void display(){
	printf("\n in function pi=%f",pi);
}
void add(int a,int b){//a,b formal parameter
	printf("\n addition of %d and %d =%d",a,b,a+b);
}
main(){
	{
		int x=10;//local varibale
		printf("\n inner x=%d",x);
	}
	//printf("\n outer x=%d",x);=>genrate error
	printf("\n pi=%f",pi);
	display();
	add(100,200);
	
}
