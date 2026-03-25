#include <stdio.h>

int main() {
	int i,space,star;
    int n = 5;
    for( i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for( star = 1; star < 2 * i; star++) {
            if(i == n || star == 1 || star == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

