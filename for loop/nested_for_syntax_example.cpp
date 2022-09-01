/*Nested for loops
*
*SYNTAX:
*	for initialization;conditionlincr/decr)
*	{
*		statements; (optional)
*		for(init;cond;incr/decr)
*			{
*				statement1;
*				......
*				statementn;
*			}
*		statements;(optional)
*	}
**/

/* program to print following pattern
1	1	1	1	1	1	1
1	1	1	1	1	1	1
1	1	1	1	1	1	1
1	1	1	1	1	1	1
1	1	1	1	1	1	1
*/

#include<stdio.h>

int main(void)
{
	int i,j;
	
	for(i=10;i<1;i--)
	{
		for(j=10;j<1;j--)
		{
			printf("%d\t",j);
			
		}
		printf("\n");
	}
	return 0;
}


