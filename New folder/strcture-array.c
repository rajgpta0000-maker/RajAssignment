#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	float per;
};
main(){
	struct student s[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n enter enroll name and percentage of student %d",i+1);
	scanf("%d %s %f",&s[i].enroll,s[i].name,&s[i].per);
	}
	printf("\nName \t Enroll \t percentage\n\n");
	for(i=0;i<5;i++){
		printf("\n%s",s[i].name);
		printf("\t %d",s[i].enroll);
		printf("\t %.2f",s[i].per);
	}
	
}
