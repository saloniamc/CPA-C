#include <stdio.h>
#include <stdlib.h>

void builtin_datatype(void);
void array_of_builtin_datatype(void);
void user_defined_datatype(void);
void array_of_user_defined_datatype(void);

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    // builtin_datatype();
    // array_of_builtin_datatype();
    // user_defined_datatype();

    return (0);
}

// void builtin_datatype(void)
// {
//     double d;
//     double *pd = NULL;

//     pd = (double *)malloc(sizeof(double));
//     if (pd == NULL)
//     {
//         printf("error in allocating the memory");
//         exit(-1);
//     }

//     pd = &d;

//     printf("Enter the double number :\n");
//     scanf("%lf", pd);

//     printf("Entered double : %lf\n", *pd);

//     free(pd);
//     pd = 0;
// }

// void array_of_builtin_datatype(void)
// {
//     int *pA = NULL;
//     unsigned int len = 0;
//     int i;

//     printf("Enter the size of the array\n");
//     scanf("%u", &len);

//     if (len <= 0)
//     {
//         printf("Invalid size\n");
//         exit(-1);
//     }

//     pA = (int *)malloc(len * sizeof(int));
//     if (pA == NULL)
//     {
//         printf("Error in allocating the memory");
//         exit(EXIT_FAILURE);
//     }

//     for (i = 0; i < len; i++)
//     {
//         printf("Enter element at index : %d\n", i);
//         scanf("%d", pA + i);
//     }

//     for (i = 0; i < len; i++)
//     {
//         printf("Element at index %d : %d\n", i, *(pA + i));
//     }

//     free(pA);
//     pA = NULL;
// }

// void user_defined_datatype(void)
// {
//     struct date *ps = NULL;

//     ps = (struct date *)malloc(sizeof(struct date));
//     if (ps == NULL)
//     {

//         puts("Error ina llocating the memory");
//         exit(-1);
//     }

//     ps->day = 1;
//     ps->month = 2;
//     ps->year = 2023;

//     printf("%d/%d/%d\n", ps->day, ps->month, ps->year);

//     free(ps);
//     ps = 0;
// }
