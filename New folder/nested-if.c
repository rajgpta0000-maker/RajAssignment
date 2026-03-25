#include<stdio.h>
struct sub{
	char name[20];
	int marks;
};
struct student{
	int enroll;
	char name[20];
	float per;
	struct sub sub1;
};
main(){
	struct student s1;
	printf("\n enter enroll name and percentage");
	scanf("%d %s %f",&s1.enroll,s1.name,&s1.per);
	printf("\n enter sub1 name and marks");
	scanf("%s %d",s1.sub1.name,&s1.sub1.marks);
	printf("\n Name of student=%s",s1.name);
	printf("\n Name of students=%s",s1.name);
	printf("\n Enroll=%d",s1.enroll);
	printf("\n percentage=%.2f",s1.per);
	printf("\n subname=%s",s1.sub1.name);
	printf("\n marks=%d",s1.sub1.marks);
}
