#include<stdio.h>
#define x 3
#define y 3
int main(void)
{
    int i,j, a[x][y];

    for(i=1;i<=x;i++)
    {
        for(j=0;j<=y;j++)
        {
            a[i][j]=j;
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

}