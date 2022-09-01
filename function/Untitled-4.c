#include<stdio.h>

int main(void)
{
    int x,sign;
    printf("This programs prints the multiple of 2 with + and - sign\n");
    x = 2;
    sign = -1;
    while (x<=36)
    {
        if (sign == -1)
        {
            printf("%d  ",x);
            x = x + 2;
            sign = 1;
        }
        else
        {
            printf("-%d  ", x);
            x = x + 2;
            sign = -1;
        }
    }
    return 0;
}