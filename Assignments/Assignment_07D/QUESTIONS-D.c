// Program 1
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("i = %d\n", i);
        if (i % 2 == 0)
            continue;
        printf("i^2 = %d\n", i * i);
    }
    exit(0);
}

// Program 2
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = -16; i < 16; ++i)
    {
        if (i % 4 == 0)
            continue;
        printf("i = %d\n", i);
    }
    exit(0);
}

// Program 3
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("i = %d\n", i);
        i += 1;
    }

    exit(0);
}

// Program 4
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
        {
            i += 1;
            continue;
        }
        printf("i = %d\n", i);
        i += 1;
    }
    exit(0);
}

// Program 5
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 8; ++i)
    {
        if (i % 2 == 0)
            continue;
        else if (i % 4 == 0)
            break;
        else
            printf("i = %d\n", i);
    }
    exit(0);
}

// Program 6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 20; ++i)
    {
        if ((i * i) > 50)
            break;
        else
            printf("i = %d\n", i);
    }
    exit(0);
}

// Program 7
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int k;
    int flag;
    for (i = 1; i < 20; ++i)
    {
        if (i == 1 && i == 2)
            continue;
        flag = 0;
        for (k = 2; k < i; ++k)
        {
            if (i % k == 0)
            {
                flag = 1;
                break; // If break or continue appear in nested loop then
                       // their effect is applicable only to the inner most loop
                       // of which they are part.
                       // e.g. This break will break out of inner loop for(k=2; k
 ++k)
// but will not break from the outer loop for(i = 0; i < 
++i)
 // Same comments can be extended for the continue statement
            }
        }

        if (flag == 1)
            printf("i = %d\n", i);
        else
            continue;
    }
    exit(0);
}

// Program 8
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++i)
            if (i > j)
 continue;
            else
 printf("i=%d is less than or equal to j=%d\n", i, j);
    exit(0);
}

// Program 9
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 10; ++i)
    {
        if (i % 2 == 1)
            continue;
        for (j = 0; j < 10; ++i)
        {
            if (j % 2 == 0)
 continue;
            printf("i=%d, j=%d\n", i, j);
        }
    }
    exit(0);
}

// Program 10
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int flag1, flag2;

    for (i = 1; i <= 10; ++i)
    {
        flag1 = 1;
        for (k = 2; k < i; ++k)
            if (i % k == 0)
 flag1 = 0;

        if (flag1 == 1)
        {
            for (j = 1; j <= 10; ++j)
            {
             flag2 = 1;
                  for (k = 2; k < j; ++j)
     if (j % k == 0)
     {
         flag2 = 0;
         break;
     }
 if (flag2 == 0)
     printf("Prime(i=%d), Composite(j=%d)\n", i, j);
            }
        }
    }
    exit(0);
}