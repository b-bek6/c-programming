/* For loop multiplication table */

/* row	*	column == product == (row*column)
	1	*	2	   == 1
	1	*	2	   == 1
	.....
	2	*	2	   == 4
	....
	10	*	10    == 100
	
	IDEA: for every row vary column from 1 to 10; then increase row by 1. Repeat until row =10,column=10.	
*/

#include<stdio.h>

int main(void)
{
	int row,column;
	for(row=1;row<=10;row++)
	{
		for(column=1;column<=10;column++)
		{
			printf("%d * %d = %d\n",row,column,row*column);
		}
		printf("\n");
	}
}
