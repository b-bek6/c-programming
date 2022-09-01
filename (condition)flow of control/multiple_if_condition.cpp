/* Nested if......else statement:

*SYNTAX:rules of the language; grammar rules; lexical rule that check legality of the program

*if (conditional)
*		{
*			statement1;
*			statement2;
*			.....
*			.....
*		}
*		if (conditional)
*		{
*			statement1;
*			statement2;
*			.....
*			.....
*		}
*		else
*			statement1;
*			statement2;
*			.....
*			.....
*		}
*else
*		{
*			statement1;
*			statement2;
*			.....
*			.....
*		}
*
/* Program to check if a number is divisible by 2 and 3 both. */
*
/* ALGOTITHM:
*	1. Declare an integer variable,say x.
*	2. Ask user to provide any value of x.
*	3.Check
*		3a. if(x % 2 == 0)
*			3b. if(x % 3 == 0)
*					print "true"
*			3c. else
*					print"x is divisible by 2, but not by 3, false"
*		3d. else
*				print" x is not divisible by 2, false"
*4. end
*
* */


#include<stdio.h>

int main(void)
{
	int x;
	
	printf("Type in any integer: \n");
	scanf("%d",& x);
	
	if (x % 3 == 0)
	{
		printf("The ")
	}
}
