#include<stdio.h>
main(){
	FILE *fp;
	char data[20];
	fp= fopen("text.txt","w");
	if(fp==NULL){
		printf("\n something wrong");
	}
	fprintf(fp,"%s","Hello World");
	fclose(fp);
	
	fp=fopen("text.txt","r");
	fscanf(fp,"%s",data);
	printf("\n reading data from file=%s",data);
	fclose(fp);
}
