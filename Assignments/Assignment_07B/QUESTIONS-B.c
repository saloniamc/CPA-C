// Program 1

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = 0; j < 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 2

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; i += 2)
        for (j = 0; j < 8; j += 1)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 3

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; i += 3)
        for (j = 0; j < 8; j += 2)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 4

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; i += 4)
        for (j = 0; j < 8; j += 5)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 5

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 16; i += 2)
        for (j = 1; j < 128; j *= 2)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 6

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 16; i += 3)
        for (j = 0; j < 128; j *= 3)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 7

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 16; ++i)
        for (j = 1; j < 128; j <<= 2)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 8

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 16; ++i)
        for (j = 1; j < 200; j <<= 3)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 9

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 1; i < 100; i <<= 2)
        for (j = 4; j < 256; j <<= 3)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 10

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = 8; j > 8; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 11

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 100; i = i * 2)
        for (j = 100; j > 0; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 12

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 100; i = i * 2)
        for (j = 100; j >= 0; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 13

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = i; j < 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 14

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = i; j <= 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 15

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i <= 8; ++i)
        for (j = i; j < 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 16

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i <= 8; ++i)
        for (j = i; j <= 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 17

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i <= 8; ++i)
        for (j = i + 1; j <= 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 18

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = i + 1; j < 8; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 19

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = 0; j < i; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 20

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = 0; j <= i; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 21

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = 8; j > i; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 22

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 8; ++i)
        for (j = 8; j >= i; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 23

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i <= 8; ++i)
        for (j = 8; j > i; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 24

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i <= 8; ++i)
        for (j = 8; j >= i; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 25

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i > 0; --i)
        for (j = 0; j < i; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 26

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i > 0; --i)
        for (j = 0; j <= i; ++j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}

// Program 27

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = -5; i < 5; ++i)
        for (j = -3; j < 3; ++j)
        {
            if ((i + j) < 0)
                puts("i + j less than 0");
            else if ((i + j) == 0)
                puts("i + j equal to 0");
            else
                puts("i + j greater than 0");
        }

    exit(0);
}

// Program 28

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = -5; i < 5; ++i)
        for (j = -3; j < 3; ++j)
        {
            if ((i * j) < 0)
                puts("i * j less than 0");
            else if ((i * j) == 0)
                puts("i * j equal to 0");
            else
                puts("i * j greater than 0");
        }

    exit(0);
}

// Program 29

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = -5; i < 5; ++i)
        for (j = -4; j <= 4; ++j)
        {
            if ((i * j) < 0)
                puts("i * j less than 0");
            else if ((i * j) == 0)
                puts("i * j equal to 0");
            else
                puts("i * j greater than 0");
        }

    exit(0);
}

// Program 30

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i >= 0; --i)
        for (j = i - 1; j > 0; --j)
            printf("i=%d, j=%d\n", i, j);

    exit(0);
}

// Program 30

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i > 0; --i)
        for (j = i - 1; j >= 0; --j)
            printf("i=%d, j=%d\n", i, j);

    exit(0);
}

// Program 31

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i >= 0; --i)
        for (j = i - 1; j >= 0; --j)
            printf("i=%d, j=%d\n", i, j);

    exit(0);
}

// Program 32

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i > 0; --i)
        for (j = 0; j < 8; ++j)
        {
            if (i > j)
                printf("i=%d is greater than j=%d\n", i, j);
            else if (i < j)
                printf("i=%d is less than j=%d\n", i, j);
            else
                printf("i=%d is equal to j=%d\n", i, j);
        }

    exit(0);
}

// Program 33

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i >= 0; --i)
        for (j = 0; j < 8; ++j)
        {
            if (i > j)
                printf("i=%d is greater than j=%d\n", i, j);
            else if (i < j)
                printf("i=%d is less than j=%d\n", i, j);
            else
                printf("i=%d is equal to j=%d\n", i, j);
        }

    exit(0);
}

// Program 34

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i > 0; --i)
        for (j = 0; j <= 8; ++j)
        {
            if (i > j)
                printf("i=%d is greater than j=%d\n", i, j);
            else if (i < j)
                printf("i=%d is less than j=%d\n", i, j);
            else
                printf("i=%d is equal to j=%d\n", i, j);
        }

    exit(0);
}

// Program 35

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i >= 0; --i)
        for (j = 0; j <= 8; ++j)
        {
            if (i > j)
                printf("i=%d is greater than j=%d\n", i, j);
            else if (i < j)
                printf("i=%d is less than j=%d\n", i, j);
            else
                printf("i=%d is equal to j=%d\n", i, j);
        }

    exit(0);
}
