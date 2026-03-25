#include<stdio.h>
void display();// function declartion
void add(int,int);
float areacircle(int);
int square();


//with return type with parameter
float areacircle(int r){
	float a=3.14*r*r;
	return a;
}

//without return type without parameter
void display(){//function definition
		printf("Hello world");
	}
//with return type without parameter
int square(){
	int num;
	printf("\n Enter num");
	scanf("%d",&num);
	return num*num;
}

//without return tupe with parameter
void add(int a,int b){
	printf("\n addition of %d and %d=%d",a,b,a+b);
}
main()
{
	display();
   add(200,100);
   float area=areacircle(3);
   printf("\n area of circle =%f",area);
   printf("\n square =%d",square());
}
