#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, sum;

    printf("Enter the 1st number: ");
    scanf("%d", &num1);

    printf("Enter the 2nd number: ");
    scanf("%d", &num2);
    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);

    exit(0);
}
