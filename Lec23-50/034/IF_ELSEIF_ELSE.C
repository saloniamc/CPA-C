#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter num:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a positive number\n", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number\n", num);
    }
    else
    {
        printf("%d is zero\n", num);
    }

    exit(0);
    // int n;

    // printf("Enter n:");
    // scanf("%d", &n);

    // if (n > 0)
    // {
    //     printf("%d is a positive number\n", n);
    // }
    // else if (n < 0)
    // {
    //     printf("%d is a negative number\n", n);
    // }
    // else
    // {
    //     printf("%d is zero\n", n);
    // }

    // exit(0);
}