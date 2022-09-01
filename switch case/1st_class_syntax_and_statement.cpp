/* this is the first switch case statement program */
/* SYNTAX:

	switch(variable):
	
	case1:
		statements:
	case2:
		statements;
	........
	default:
		statements;
	*/
	
/* Program to check tf a number is odd or even using switch case statement. */

#include<stdio.h>

int main(void)
{
	int number,choice;
	printf("Please give an intiger: \n");
	scanf("%d",&choice);
	
	switch (number)
	
	case 1:
		printf("Please provide an integer");
		scanf("%d",&number);
		
		if(number%2==0)
		{
			printf("%d is multiple of 2\n");
		}
		else
		{
			printf("%d is even.\n");
		}
	case 2:
		if(number % 2 != 0)
		{
			printf("%d is even.\n");
		}
	default:
		printf("the number should be intiger:")
	
}
