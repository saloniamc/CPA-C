#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_1 = 10;
    int num_2 = 20;
    int rs1 = 0, rs2 = 0;

    printf("num1 = %d\n", num_1);
    rs1 = ++num_1;
    printf("num_2 = %d, rs1=%d\n", num_2, rs1);
    rs2 = num_1++;
    printf("num_1=%d, rs2=%d\n", num_1, rs2);

    rs1 = 0;
    rs2 = 0;

    rs1 = --num_2;
    printf("num2 = %d, rs1 = %d\n", num_2, rs1);
    rs2 = num_2--;
    printf("num_2 = %d, rs2 = %d\n", num_2, rs2);
    return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int num1 = 10;
//     int num2 = 20;
//     int rs1 = 0, rs2 = 0;

//     printf("num1 = %d\n", num1);
//     rs1 = ++num1;
//     printf("num2 = %d, rs1 = %d\n", num2, rs1);
//     rs2 = num1++;
//     printf("num1 = %d, rs2 = %d\n", num1, rs2);

//     rs1 = 0;
//     rs2 = 0;

//     rs1 = --num2;
//     printf("num2 = %d, rs1 = %d\n", num2, rs1);
//     rs2 = num2--;
//     printf("num2 = %d, rs2 = %d\n", num2, rs2);

//     return (0);
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int rs1 = 0, rs2 = 0;

    printf("num1 = %d\n", num1);
    rs1 = ++num1;
    printf("num1 = %d, rs1 = %d\n", num1, rs1);
    rs2 = num1++;
    printf("num1 = %d, rs2 = %d\n", num1, rs2);

    rs1 = 0;
    rs2 = 0;

    rs1 = --num2;
    printf("num2 = %d, rs1 = %d\n", num2, rs2);
    rs2 = num2--;
    printf("num2 = %d, rs2 = %d\n", num2, rs2);

    return (0);
}
