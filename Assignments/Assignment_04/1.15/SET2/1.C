/* Set 2:

int a = 10, b = 25;
int c = 300, d = 20;
int e = 200, f = 205;
*/

#include <stdio.h>
#include <stdlb.h>

int main(void)
{
    int a = 10;
    int b = 25;
    int c = 300;
    int d = 20;

    int rs = (a > b) && (c < d);

    printf("The value in rs is %d\n", rs);

    return (0);
}
