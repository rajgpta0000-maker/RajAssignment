#include<stdio.h>
/*
	else if(cond-1){}
	else if(cond-2){}
	else if(cond-3){}
	else{}
*/
main(){
	int s1,s2,s3;
	printf("\n enter All sides values:");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3 && s3==s1){
		printf("Equilateral Tringle");
	}
	else if(s1==s2 )||( s2==s3 )||( s3==s1){
		printf("\nIssosceles Tringle");
	}
	else if(s1!=s2 && s2!=s3 && s3!=s1){
		printf("Scalene Tringle");
	}else
	printf("\n wrong input");
}
}
