#include <stdio.h>

 main() {
    int i,space,star,n = 5;
    for( i = n; i >= 1; i--) {
        for( space = 0; space < n - i; space++) {
            printf(" ");
        }
        for( star = 1; star <= i; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

