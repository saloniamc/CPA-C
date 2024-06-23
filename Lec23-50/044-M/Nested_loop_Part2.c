#include <stdio.h>
#include <stdlib.h>

#define N 5

void pattern1(void);
void pattern2(void);
void pattern3(void);
void pattern4(void);
void pattern5(void);
void pattern6(void);

int main(void)
{
    //% PATTERNS USING WHILE AND FOR LOOP

    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    pattern6();
    return (EXIT_SUCCESS);
}
// void pattern1(void)
// {
//     pattern("Pattern 1\n");
//     printf("Using while:\n");
//     int i = 0;
//     while (i < N)
//     {
//         int j = i;
//         while (j < N)
//         {
//             printf("%d, %d\n", i, j);
//             j++;
//         }
//         i++;
//     }

//     printf("\nUsing for:\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i; j < N; j++)
//         {
//             printf("%d, %d\n", i, j);
//         }
//     }
// }

// void pattern2(void)
// {
//     printf("Pattern 2\n");
//     printf("Using while:\n");
//     int i = 0;
//     while (i < N)
//     {
//         int j = i + 1;
//         while (j < N)
//         {
//             printf("%d, %d\n", i, j);
//             j++;
//         }
//         i++;
//     }

//     printf("\nUsing for:\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {
//             printf("%d, %d\n", i, j);
//         }
//     }
// }

// void pattern3(void)
// {
//     printf("Pattern 3\n");
//     printf("Using while:\n");
//     int i = 0;
//     while (i < N)
//     {
//         int j = 0;
//         while (j <= i)
//         {
//             printf("%d, %d\n", i, j);
//             j++;
//         }
//         i++;
//     }

//     printf("\nUsing For:\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%d, %d\n", i, j);
//         }
//     }
// }

// void pattern4(void)
// {
//     printf("Pattern 4\n");
//     printf("Using while:\n");
//     int i = 0;
//     while (i < N)
//     {
//         int j = 0;
//         while (j < i)
//         {
//             printf("%d, %d\n", i, j);
//             j++;
//         }
//         i++;
//     }

//     printf("\nUsing for:\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("%d, %d\n", i, j);
//         }
//     }
// }

// void pattern5(void)
// {
//     printf("Pattern 5\n");
//     printf("Using while:\n");

//     int i = 0;
//     while (i < N)
//     {
//         int j = 0;
//         while (j < N)
//         {
//             if (i != j)
//             {
//                 printf("%d, %d\n", i, j);
//             }
//             j++;
//         }
//         i++;
//     }

//     printf("\nUsing For:\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if (i != j)
//             {
//                 printf("%d, %d\n", i, j);
//             }
//         }
//     }
// }

void pattern6(void)
{
    printf("Pattern 6\n");
    printf("Using while:\n");
    int i = 0;
    while (i < N)
    {
        int j = 0;
        while (j < N)
        {
            if (i == j)
            {
                printf("%d, %d\n", i, j);
            }
            j++;
        }
        i++;
    }

    printf("Using for:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                printf("%d, %d\n", i, j);
            }
        }
    }
}
