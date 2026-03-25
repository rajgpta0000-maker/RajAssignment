#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	float per;
};
main(){
	struct student s1;
	printf("\n Enter enroll name and percentage:");
	scanf("%d %s %f",s1.enroll,s1.name,s1.per);
	printf("\n Name of student=%s",s1.name);
	printf("\n Enroll=%d",s1.enroll);
	printf("\n percentage=%.2f",s1.per);
}
