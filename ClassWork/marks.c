#include<stdio.h>
main(){
	int marks;
	
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	if(marks > 90){
		printf("Grade A\n");
	}
	else if(marks > 75 && marks <=90){
		printf("Grade b\n");
	}
		else if(marks > 50 && marks <= 75){
		
		printf("Grade c\n");
	}
}
