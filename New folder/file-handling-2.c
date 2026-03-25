#include<stdio.h>
main(){
	FILE *fp;
	char data[20],ch;
	fp=fopen("text2.txt","w");
	if(fp==NULL){
		printf("\n Something wrong");
	}
	fputs("Surat City",fp);
	
	fclose(fp);
	
	fp=fopen("text2.txt","r");
	
	fgets(data,20,fp);
	
	printf("\n Reading char from file=%s",data);
	fclose(fp);
}
