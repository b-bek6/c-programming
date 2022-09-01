/* Program to check if a number is divisible of 2 and 3 */

#include<stdio.h>

int main(void)
{
	int number;
	
	printf("Please enter a number: \n");
	scanf("%d",&number);
	
	if ( (number%2==0) && (number%3==0) )
		{
			printf("Entered number is divisible by 2 and 3");
		}
	else
		{
			printf("Entered number is not divisible by 2 and 3");
		}
	return 0;	
}
