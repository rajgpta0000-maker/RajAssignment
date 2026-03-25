#include<stdio.h>
// 5! = 5*4! 5*4*3! 5*4*3*2! 5*4*3*2*1!
int factfind(int num){
	if (num==1){
		return 1;
	}
	int f;
	f=num*factfind(num-1);//5*ff(4)
	return f;
	
}
main(){
	printf("\n factorial = %d",factfind(5));
}
