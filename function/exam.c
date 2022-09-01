#include<stdio.h>
int main(void) 
{
    printf("This program prints multiples of 2, with negatives too!");
    int x=2, signx = 1, sign =-1;
    while (x <= 36)
    {
        if (sign == -1)
        {
        printf("%d \t", x);
        sign = 1;
         x = x+2;
       
    }
    else
    {
        printf("-%d\t", x);
        sign = -1;
         x=x+2;
    }
    }
 return 0;
}