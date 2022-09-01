/*program to check if a number is greater than five and les than 100 abd divisible by 6 */

#include<stdio.h>

int main(void)
{
	int number;
	
	printf("Please enter a number: \n");
	scanf("%d",&number);
	
	if ((number>5)&&(number<100)&&(number%6==0))
		{
			printf("Entered number is less than 100, greater than 5 and divisible by 6\n");
		}
	else
		{
			printf("Enter number is less than 5 or greater than 100 or not divisible of 6\n");
		}
	return 0;
}
