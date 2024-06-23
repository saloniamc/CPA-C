#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define k 8.988 * 10e9

float q1, q2, r;
float f;

int main(void)
{
    printf("Enter the charge on particle1:");
    scanf_s("%f", &q1);
    printf("Enter the charge on particle2:");
    scanf_s("%f", &q2);
    printf("Distance between particles:");
    scanf_s("%f", &r);

    f = (k * q1 * q2) / (r * r);
    printf("The magnitude of force: %lf Newton\n", f);

    if ((q1 > 0 && q2 > 0) || (q1 < 0 && q2 < 0))
    {
        printf("The Force between the charges is Repulsion\n");
    }
    else
    {
        printf("The Force between the charges is Attraction\n");
    }

    return (0);
}