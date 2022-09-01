#include<stdio.h>

int main(void)
{
    int i,j;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        printf("* ",i);
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        printf("* ",i);
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        printf("* \n");
    }
    return 0;
}