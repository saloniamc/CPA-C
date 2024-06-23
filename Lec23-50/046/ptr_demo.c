char c1;
unsigned char uc1;

short s1;
unsigned short us1;

int i;
unsigned int ui;

long l;
unsigned long ul;

long long ll;
unsigned long long ull;

float f;
double d;
long double ld;

// Their pointer declaration

char *pChar;
unsigned char *puChar;

short *pShort;
unsigned puShort;

int *pI;
unsigned int *puInt;

long *pLong;
unsigned long *puLong;

long long *pLL;
unsigned long long *puLL;

float *pF;
double *pDouble;
long double *plDouble;

int main(void)
{
    pChar = &c1;
    puChar = &uc1;

    pShort = &s1;
    puShort = &us1;

    pI = &i;
    puInt = &ui;

    pLong = &l;
    puLong = &ul;

    pLL = &ll;
    puLL = &ull;

    pF = &f;
    pDouble = &d;
    plDouble = &ld;

    return (0);
}