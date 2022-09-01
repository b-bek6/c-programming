/* This program checks if a number is multiple of 2 and 5. */
// AND operator: && OR operator: ||, >greater than, <lessthan, >= greater or equal
/* Algorithm:
*	1. Declare a variable, say "number".
*	2. ask the user for a value to put in the variable "number".
* 	3. Check
*		3a. Is "number" % 2==0 ?
*			3a1. Is "number" %5==0?
*				if yes, print"True"
*				if not, print"False"
*			3b. If not, print "false"
*	4.End.
*
*
*	OR
*
*	3. Is "number" %2==0 AND "number" %5==0?
*			print "true"
*		if not,
*			print "false"
*/


#include<stdio.h>

int main(void)
{
	int number;
	printf("enter any number: \n");
	scanf("%d",&number);
	
	if(number%2==0)
		{
			if(((number%2==0) || (number%5==0)) && number>10)
				{
					printf("The number is divisible by 2 or 5. \n");
				}
			else
				{
					printf("The not number is divisible by 2 or 5. \n");
				}
	return 0;	
		}
}
