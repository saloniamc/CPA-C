#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TRUE 1
#define FALSE 0

#define TRIES 3

float m1, m2, r;
double G = 6.673;
double F;

double get_valid_measure(void);
void exit_app(void);

int main(void)
{
    printf("Enter the mass of object-1 (in kg):");
    m1 = get_valid_measure();

    printf("Enter the mass of object-2 (in kg):");
    m2 = get_valid_measure();
    printf("Enter the distance between the two objects (in meter):");
    r = get_valid_measure();

    F = (G * m1 * m2) / (r * r);

    printf("The gravitational force is %lf * 10e-11 Newton\n", F);

    return (0);
}

double get_valid_measure()
{
    int i;
    double valid_value = 0.0;
    int flag = FALSE;

    for (i = 0; i < TRIES; ++i)
    {
        scanf_s("%lf", &valid_value);
        if (valid_value > 0)
        {
            flag = TRUE;
            break;
        }
        puts("Enter a valid value:");
    }
    if (flag == FALSE)
        exit_app();

    return (valid_value);
}

void exit_app(void)
{
    exit(0);
}
