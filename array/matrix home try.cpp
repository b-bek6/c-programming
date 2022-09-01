//

#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
	int A[ROW][COL],i,j;
	
	for(i=1;i<=ROW;i++)
	{
		for(j=0;j<=COL;j++)
		{
			A[i][j]=j;
		}
	}
	for(i=1;i<=ROW;i++)
	{
		for(j=0;j<=COL;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
