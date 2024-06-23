// int max(int n1, int n2);

// int main(void)
// {
//     int a = 500;
//     int b = 200;
//     int a1 = max(10, 5);
//     int a2 = max(a, b);
//     int a3 = max(400, b);
//     printf("%d\n%d\n%d\n", a1, a2, a3);

//     return (0);
// }

// int max(int n1, int n2)
// {
//     int max_number;

//     if (n1 > n2)
//         max_number = n1;
//     else
//         max_number = n2;

//     return (max_number);
// }

int max(int n1, int n2);

int main(void)
{
    int a = 100;
    int b = 200;
    int a1 = max(a, b);
    int a2 = max(249, 739);
    int a3 = max(105, b);

    printf("%d\n%d\n%d\n", a1, a2, a3);

    return (0);
}

int max(int n1, int n2)
{
    int max_number;
    if (n1 > n2)
        max_number = n1;
    else
        max_number = n2;

    return (max_number);
}
