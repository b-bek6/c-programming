#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3

int main(void)
{
    int     X[ROW][COL],i,j;

    for (i=0;i<=ROW;i++)
    {
        for (j=0;j<=COL;j++)
        {
            X[i][j] = j;
        }
        printf("/n");
    }
    for (i=0;i<=ROW;i++)
    {
        for (j=0;j<=COL;j++)
        {
            printf("%d  ",X[i][j]);
        }
        printf("/n");
    }
    getch ();
}