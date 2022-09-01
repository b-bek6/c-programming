/* For loop
*
* SYNTAX: For loop

*	when comparing while and for we can see the following syntax rules:
*
*********************************************************************
*
*		initialization;
*		While(condition)
*		{
*			statement1;
*			.....
*			increment/decrement;
*		}
***********************************************************************
*
*  for(initiliazation; condition; increament/decreament(4))
*	{
*		(3)
*		statement1;
*		.....
*		statementn;
*	}
*	
************************************************************************
*/
		
/*This program prints 10 natural numbers.  */

#include<stdio.h>

int main(void)
{
	int i;
	
	for (i=1;i<=10;i++)
		printf("%d\t",i);
	
	return 0;
}
