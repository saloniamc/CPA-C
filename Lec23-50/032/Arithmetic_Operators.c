#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;
int sum;
int sub;
int mul;
int quotientl;
int remainder;

int main(void)
{
    printf("Enter the first number: \n");
    scanf("%d", &n1);

    printf("Enter the second number: \n");
    scanf("%d", &n2);
    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    quotientl = n1 / n2;
    remainder = n1 % n2;

    printf("Summation = %d\nSubstraction = %d\nMultiplication = %d\nQuotient = %d\nRemainder = %d\n", sum, sub, mul, quotientl, remainder);

    exit(0);
}