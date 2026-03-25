#include<stdio.h>
struct product{
	char name[20];
	float price;
	char description[20];
};
main(){
	struct product s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n enter  name  price and description of product %d",i+1);
	scanf("%s %f %s",s[i].name,&s[i].price,s[i].description);
	}
	printf("\nName \t Price \t description\n\n");
	for(i=0;i<3;i++){
		printf("\n %s",s[i].name);
		printf("\t %.2f",s[i].price);
		printf("\t %s",s[i].description);
	}
	
}
