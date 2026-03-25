#include<stdio.h>
main(){
	FILE *fp;
	char name[20],email[30],ch;
	int rollno,i;
	fp = fopen("student.csv","w");
	for(i=1;i<=3;i++){
		printf("\n Enter Student Details of No =%d",i);
		printf("\n Enter Roll No: Name: E-Mail:");
		scanf("%d %s %s",&rollno,name,email);
	}
	fclose(fp);
	
	fp=fopen("student.csv","r");
	printf("\n roll no \t name \t email \n");
	while((ch=fgetc(fp))!=EOF){
		if(ch==','){
			putchar('\t');
			continue;
		}
		putchar(ch);
	}
	fclose(fp);
}
