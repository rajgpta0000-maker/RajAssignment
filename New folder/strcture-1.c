#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	float per;
};
main(){
	struct student s1={101,"Raj",90};
	printf("\n Name of student=%s",s1.name);
	printf("\n Enroll of student=%d",s1.enroll);
	printf("\n percentage of student=%.2f",s1.per);
}
