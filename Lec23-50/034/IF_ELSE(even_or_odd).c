#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enetr any number: \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is an even number\n", n);
    }
    else
    {
        printf("%d is and odd number\n", n);
    }

    return (0);
}