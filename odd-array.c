#include <stdio.h>

int main() {
	int i;
    int a[5];
    int count = 0;
    for(i = 0; i < 5; i++) {
       printf("\n Enter the number a[%d]= ",i,a[i]);
	   scanf("%d",&a[i]); 
	}

    
    for(i = 0; i < 5; i++) {
        if(a[i] % 2 != 0) {
        	printf("\na[%d]=%d",i,a[i]);
            count++;
        }
    }

    printf("\nTotal odd numbers: %d\n", count);

    return 0;
}

