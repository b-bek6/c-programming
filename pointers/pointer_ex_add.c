#include<stdio.h>

int main(void)
{
    int *m, *p, a, b, c;            // int *p;  *p is the value inside; p is location

    a = 9;
    b = 11;
    c = a + b;

    m = &c;
    *p = *m + a;

    printf("%d\t %d\t %d\t %d\t %d\n", *p, *m, a, b, c);

    return 0;
}