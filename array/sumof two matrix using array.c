#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
    int a[ROW][COL],b[ROW][COL],c[ROW][COL],i,j;

    printf("Enter for MATRIX 1: \n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter the value a[%d][%d]: \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter for another MATRIX 2: \n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter the value a[%d][%d]: \n",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("MATRIX 1 is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX 2 is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

     printf("The sum of MATRIX 1 and MATRIX 2 is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}