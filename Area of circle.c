#include<stdio.h>
main(){
	float radius,area;
	const float PI=3.14;
	
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	
	area=PI*radius*radius;
	
	printf("Area of the circle = %.2f",area);
}
