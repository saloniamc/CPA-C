#include <stdio.h>
#include <stdlib.h>

int i_arr[5];

int main(void)
{
    i_arr[0] = 100;
    i_arr[1] = 200;
    i_arr[2] = 300;
    i_arr[3] = 400;
    i_arr[4] = 500;

    printf("i_arr[%d] = %d\n", 1, i_arr[0]);
    printf("i_arr[%d] = %d\n", 2, i_arr[1]);
    printf("i_arr[%d] = %d\n", 3, i_arr[2]);
    printf("i_arr[%d] = %d\n", 4, i_arr[3]);
    printf("i_arr[%d] = %d\n", 5, i_arr[4]);

    exit(0);
}