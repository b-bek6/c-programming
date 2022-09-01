#include<stdio.h>
int main(void) 
{
    printf("%s", "This program prints multiples of 2, with negatives too!");
    int x, signx = 2, sign =-1;
    while (x <= 36)
    {
        if (signx == -1)
        {
        printf("%d \t", &x);
        x = x+2;
        sign = 1;
    }
    else
    {
        printf("-%f\t", x);
        sign = -1;
         x=x+2;
    }
    }
 return 0;
}
