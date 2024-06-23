#include <stdio.h>
#include <stdlib.h>

#define Repetations 10

int main(void)
{
    int i;
    int num;

    i = 0;
    while (i < Repetations)
    {
        printf("num = %d\n", i);
        i += 1;
        if (i % 7 == 0)
        {
            break;
        }
    }
    printf("You broke out of the loop at 7\n");
    return (0);
}