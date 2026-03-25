#include<stdio.h>
// find length of str without using strlen function
main(){
	char str[20];
	int i=0;
	printf("\n Enter str=");//tops
	// scanf("%s",str);
	gets(str);
	printf("\n str=%s",str);
	
	while(str[i]!='0'){
		i++;
	}
	printf("\n len of str=%d",i);
}
