#include<stdio.h>
void incre(){
	int normal=0;
	static int like=0;
	like++;
	normal++;
	printf("\n like=%d \t normal variable=%d",like,normal);
}
main(){
	int i;
	for(i=1;i<=5;i++){
		incre();
	}
}
