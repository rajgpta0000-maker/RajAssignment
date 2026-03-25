#include<stdio.h>
/*

*/
main(){
	FILE *fp;
	char data[20],ch;
	fp=fopen("text3.txt","w");
	if(fp==NULL){
		printf("\n Something wrong");
	}
	fputc('z',fp);
	
	fclose(fp);
	
	fp=fopen("text3.txt","r");

	
	ch=fgetc(fp);
	
	printf("\n Reading char from file=%c",ch);
	fclose(fp);
}
