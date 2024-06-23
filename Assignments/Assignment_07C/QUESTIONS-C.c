// Program 1
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            for (k = 0; k < 4; ++k)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 2
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    i = 0;
    while (i <= 3)
    {
        j = 1;
        while (j <= 5)
        {
            k = 0;
            while (k < 3)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
                k = k + 1;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    exit(0);
}

// Program 3
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 10; i = i + 3)
    {
        for (j = 0; j <= 16; j = j + 4)
        {
            for (k = 1; k < 20; k += 6)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 4
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 4; i > 0; --i)
    {
        for (j = 0; j < 5; ++j)
        {
            for (k = 1; k < 8; k += 2)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 5
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 1; i < 16; i *= 2)
    {
        for (j = 16; j > 1; j /= 2)
        {
            for (k = 1; k < 10; k <<= 2)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = -3; i < 3; ++i)
    {
        for (j = -2; j < 2; ++j)
        {
            if ((i + j) > 0)
            {
                for (k = 1; k < 16; k <<= 2)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
            else if ((i + j) < 0)
            {
                for (k = 0; k < 2; ++k)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k) l
                }
            }
            else
            {
                for (k = 5; k > 0; k = k - 2)
                {
                    printf("i = %d, j = %d, k = %d\n", i, j, k);
                }
            }
        }
    }
    exit(0);
}

// Program 7
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < 8; ++j)
            {
                if (j % 3 == 0)
                {
                    for (k = 0; k < 4; ++k)
                    {
                        printf("i=%d, j=%d, k=%d\n", i, j, k);
                    }
                }
            }
        }
    }
    exit(0);
}

// Program 8
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = 5; j > 0; --j)
        {
            if (i > j)
            {
                for (k = 0; k < 4; ++k)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
            else
            {
                printf("i=%d is less than or equal to j=%d\n", i, j);
            }
        }
    }
    exit(0);
}

// Program 9
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = 5; j > 0; --j)
        {
            if (i < j)
            {
                for (k = 0; k < 4; ++k)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
            else
            {
                printf("i=%d is greater than or equal to j=%d\n", i, j);
            }
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
    for (i = 0; i < 5; ++i)
    {
        for (j = 5; j > 0; --j)
        {
            if (i <= j)
            {
                for (k = 0; k < 4; ++k)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
            else
            {
                printf("i=%d is greater than j=%d\n", i, j);
            }
        }
    }
    exit(0);
}

// Program 11
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = 5; j > 0; --j)
        {
            if (i >= j)
            {
                for (k = 0; k < 4; ++k)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
            else
            {
                printf("i=%d is less than j=%d\n", i, j);
            }
        }
    }
    exit(0);
}

// Program 12
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = i; j < 3; ++j)
        {
            for (k = j; k < 4; ++k)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 13
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 3; ++j)
        {
            for (k = j + 1; k < 4; ++k)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 14
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i <= 5; ++i)
    {
        for (j = i + 1; j <= 3; ++j)
        {
            for (k = j + 1; k <= 4; ++k)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}

// Program 15
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = 3; j > 0; --j)
        {
            for (k = 0; k < 4; ++k)
            {
                if ((i + j) > k)
                    printf("i=%d + j=%d > k=%d\n", i, j, k);
                else if ((j + k) > i)
                    printf("j=%d + k=%d > i=%d\n", j, k, i);
                else if ((k + i) > j)
                    printf("k=%d + i=%d > j=%d\n", k, i, j);
            }
        }
    }
}