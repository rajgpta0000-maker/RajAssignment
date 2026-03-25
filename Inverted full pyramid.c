#include <stdio.h>

int main() {
	int i,space,star;
    int n = 5;
    for( i = n; i >= 1; i--) {
        for( space = 0; space < n - i; space++) {
            printf(" ");
        }
        for(star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

