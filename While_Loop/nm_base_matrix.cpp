/*print rows*column matrix using nested while*/

#include<stdio.h>

int main(void)
{
	int i,j,rows,cols;
	
	printf("Please input the nuber of rows and columns: ");
	scanf("%d%d",&rows,&cols);
	
	i=1;

	while(i<=rows)
	{
		j=1;
		while(j<=cols)
		{
			printf("bibek\t");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
