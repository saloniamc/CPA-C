int printf(const char *fmt, ...);
void test_printf(void);
void exit(int);

int num = 120;

int main(void)
{
    printf("The program starts here.\n");
    printf("The value of num is %d \n", num);
    test_printf();
    printf("The program ends here.\n");

    exit(0);
}

void test_printf(void)
{
    /* signed and unsigned char */
    char c1 = 'S';
    char c2 = -11;
    unsigned char c3 = 145;

    /* signed and unsigned short int */
    short int s_num = -34252;
    unsigned short int us_num = 42902;

    /* signed and unsigned int */
    int i_num = -2863517;
    unsigned int ui_num = 7153682;

    /* signed nad unsigned long int */
    long int li_num = -83634362;
    unsigned long int uli_num = 2634638;

    /* signed and unsigned int */
    long long int lli_num = -6328263;
    unsigned long long int ulli_num = 83578162;

    /* float and double */
    float f_num = 3.273362;
    double d_num = 7532.6578456;

    /* printing char */
    printf("Character data:\n");
    printf("c1 = %c\n\n", c1);

    /* printing signed integers */
    printf("Signed Integer Data\n");
    printf("c2 = %hhd\n", c2);
    printf("s_num = %hd\n", s_num);
    printf("i_num = %d\n", i_num);
    printf("li_num = %ld\n", li_num);
    printf("lli_num = %lld\n\n", lli_num);

    /* printing unsigned integers */
    printf("Unsigned Integer Data\n");
    printf("c3 = %hhu\n", c3);
    printf("us_num = %hu\n", us_num);
    printf("ui_num = %u\n", ui_num);
    printf("uli_num = %lu\n", uli_num);
    printf("ulli_num = %llu\n\n", ulli_num);

    /* printing float and double */
    printf("Floating point \n");
    printf("f_num = %f\n", f_num);
    printf("d_num = %lf\n\n", d_num);

    printf("Controlling precision of floating point :\n");
    printf("f_num = %.1f\n", f_num);
    printf("f_num = %.2f\n", f_num);
    printf("f_num = %.3f\n", f_num);
    printf("f_num = %.4f\n", f_num);
}
