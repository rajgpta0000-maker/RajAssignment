#include<stdio.h>
main(){
	char ope;
	double a,b,res;
	
	printf("Enter the case:");
	scanf("%c",&ope);
	printf("Enter the a and b:\n");
	scanf("%lf %lf",&a,&b);
	switch(ope)
	{
		case 'A':
			res = a + b;
			printf("Addition:%.f",res);
		break;
		case 'B':
			res = a - b;
			printf("Substration:%.f",res);
		break;
		case 'C':
			res = a * b;
			printf("Multiplication:%.f",res);
		break;
		case 'D':
			res = a / b;
			printf("Division:%.f",res);
		break;
	}
}

