#include<stdio.h>
#define ROW 10
#define COL 5

int main(void)
{
	int X[ROW][COL], Y[ROW][COL], Z[ROW][COL],  i, j; 
	
	for(i=0; i < ROW; i++)  
	{
		for (j=0; j < COL; j++)
		{
			X[i][j] = j;
	       		Y[i][j] = i;
			Z[i][j] = X[i][j] + Y[i][j];
		}
	}

	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("%d\t", Z[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

