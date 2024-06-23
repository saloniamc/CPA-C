#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number is positive\n");
    }

    printf("Bye Bye");
    exit(0);
}