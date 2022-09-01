/* nested while loop, printing a matrix */

/* SYNTAX
*
* Initialization;
*while(condition)
*{
*		statement1;
*		......
*	
*		while(condition)
*		{
*				statement1;
*				.....
*				increament/decrement;
*		}
*		increament/decrement;
*}
*
*/

#include<stdio.h>

int main(void)
{
	int x,y;
	x=1;
	y=1;
	
	while(x <= 10)
	{
		y=1;
		while (y <= 10)
		{
			printf("%d\t",y);
			y++;
		}
		printf("\n");
		x++;
	}
	return 0;
}
