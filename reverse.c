#include<stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n Enter num");
	scanf("%d",&num);
	while(num != 0){
		rem=num != 10;
		//printf("\n rem=%d",rem);
		num=num/10;
		rev=rev*10+rem;
		//printf("\t rev=%d",rev)
		
	}
	printf("\n rev=%d,rev");
}
