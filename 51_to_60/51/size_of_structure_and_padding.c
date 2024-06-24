struct A
{
    int a;
    char b;
    float f;
    char d;
};

struct B
{
    int a;
    float b;
    char c, d;
};

struct C
{
    unsigned long long val;
    int num;
    char c1, c2;
};

struct D
{
    int i;
    long long j;
};

int main(void)
{
    printf("Size of struct A= %llu\n", sizeof(struct A));
    printf("Size of struct B= %llu\n", sizeof(struct B));
    printf("Size of struct C= %llu\n", sizeof(struct C));
    printf("Size of struct D= %llu\n", sizeof(struct D));
    return (0);
}