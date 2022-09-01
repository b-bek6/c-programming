/* This is the first switch case statement program */
/* SYNTAX:
	
	switch(variable of choise):		//Vaiable should bo of integer Type only; char, int, long int
	
	case 1:							//variable of choice has the value 1.
		statements;
	case 2:							// variable of choice has the value 2.
		statements;
	....
	default:						// the user did not select the said values.
		statements;
*/

/* Program to check if a number is odd or even using switch case statement. */

#include<stdio.h>

int main(void)
{
	int number, choise;
	
	printf("Please give an intiger value. \n");
	scanf("%d",&number);
	
	printf("1. Check if the number is multiple of 3. \n 2. Checks for multiple of2. \n please select either 1 or 2: \n");
	scanf("%d",& choise);
	
	switch (choise)
	{
		case 1:
			if (number % 3 ==0)
			{
				printf("%d is multiple of 3.\n", number);
			}
			else
			{
				printf("%d is not divisible by 3. \n",number);
			}
			break;
		
		case 2:
			if (number % 2 ==0)
			{
				printf("%d is multiple of 2.\n", number);
			}
			else
			{
				printf("%d is not divisible by 2. \n",number);
			}
			break;
		
		default:
			printf("Please select either 1 or 2:\n ");
			
	}
	return 0;
}
