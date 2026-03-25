#include <stdio.h>

int main()
{
    int num, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    flag = 0;
    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(num == 1)
        printf("1 is neither prime nor composite\n");
    else if(flag == 0)
        printf("%d is a Prime number\n", num);
    else
        printf("%d is Not a Prime number\n", num);

    // Print all prime numbers from 1 to num
    printf("\nPrime numbers from 1 to %d are:\n", num);

    for(i = 2; i <= num; i++)
    {
        flag = 0;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }

    return 0;
}
