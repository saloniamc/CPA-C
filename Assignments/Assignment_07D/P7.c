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
                break;
            }
        }

        if (flag == 1)
            printf("i = %d\n", i);
        else
            continue;
    }
    exit(0);
}
