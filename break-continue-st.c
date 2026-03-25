#include<stdio.h>
main(){
	int i,num;
	for(i=1;i<=10;i++){
		if(i==5){
			//break;
			continue;
		}
		printf("\n i=%d",i);
	}
	for(;;){
		printf("\n enter num");
		scanf("%d",&num);
		if(num==7){
			break;
		}
	}
}
