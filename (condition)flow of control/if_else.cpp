/* th if .... else if ... ladder
*
* SYNTAX:
*
*
	if (conditional)
*		{
*			statement1;
*			statement2;
*			.....
*			.....
*		}
*		else if (condition)
*		{
*			statement1;
*			statement2;
*			.....
*			.....
*		}
*		........
*
*		else
*			statement1;
*			statement2;
*			.....
*			.....
*		}
**/
/* check if a number is divisible by 2, 3, or 5 */

#include<stdio.h>

int main(void)
{
	int y;
	
	printf("Give in a number:\n");
	scanf("%d",&y);
	
	if (y % 3 == 0)
	{
		printf("The given number is divisible by 3\n");
	}
	else if (y % 2 == 0)
	{
		printf("The given number is divisible by 2\n");
		
	}
	else if (y % 5 == 0)
	{
		printf("The given number is divisible by 5\n");
		
	}
	else
	{
		printf("The given number is not divisible by 3 and 5\n");
	}
	
	return 0;
}
