#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
	int X[ROW][COL],i,j;
	
	for (i=1;i<ROW;i++)
	{
		for(j=1;j<COL;j++)
		{
			X[i][j]=j;
		
		}
	}
	for (i=1;i<=ROW;i++)
	{
		for (j=1;j<=COL;j++)
		{
			printf("%d ",X[i][j]);
		}
		printf("\n");
	}
	return 0;
}
