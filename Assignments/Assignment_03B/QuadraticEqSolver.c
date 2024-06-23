#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int a, b, c, inroot;
float root1, root2;
float fun;

int main(void)
{
    printf("Enter the value of a:");
    scanf_s("%d", &a);
    if (a == 0)
    {
        puts("'a' cannot be zero\n");
        exit(0);
    }
    printf("Enter the value of b:");
    scanf_s("%d", &b);
    printf("Enter the value of c:");
    scanf_s("%d", &c);
    int inroot = ((b * b) - (4 * a * c));
    fun = sqrt(inroot);
    if (inroot <= 0)
    {
        puts("The equation ax^2 + bx + c does not have real roots\n");
        exit(0);
    }
    // printf("%f", fun);

    root1 = ((-b + fun) / (2 * a));
    root1 = ((-b - fun) / (2 * a));

    printf("The root of the equation are : %f and %f\n", root1, root2);

    return (0);
}