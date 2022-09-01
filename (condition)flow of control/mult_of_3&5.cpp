/* program to check if a number is multiple of 3 and 5*/

#include<stdio.h>

int main(void)
{
	int number;
	
	printf("Please enter any number: \n");
	scanf("%d",&number);
	
	if ((number%3==0)&&(number%5==0))
		{
			printf("Entered number is multiple of 3 and 5");
		}
	else 
		{
			printf("Entered number is not a multiple of 3 and 5");
		}
	return 0;
}

