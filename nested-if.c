#include<stdio.h>
//nested if
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n Enter maths phy chem marks");
	scanf("%d %d %d",&maths,&phy,&chem);
	if(maths >=65 && phy >= 55 && chem >= 50){//66 56 51=173//122
		total = maths+phy+chem;
		subtotal = maths+phy;
		if(total>=199 || subtotal>=145){
			printf("\n Eligile for addmission");
		}
		else{
			printf("\n not Eligile for addmission=>inner");
		}
	}
		else{
			printf("\n not Eligile for =>outer");
			
		}
	}

