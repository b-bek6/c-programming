#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
	int A[ROW][COL],i,j;
	
	for(i=0;i<=ROW;i++)
	{
		for(j=0;j<=COL;j++)
		{
			A[i][j]=i;
		}
	}
	for(i=0;i<=ROW;i++)
	{
		for(j=0;j<=COL;j++)
		{
			printf("%d  ",A[i][j]);
		}
		printf("\n");
	}
}
