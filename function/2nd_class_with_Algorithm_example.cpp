
/* Checks if a given number is divisible by 7 */

/* ALGORITHM:
	step 1: Start
	step 2: Get user input, x.
	step 3: If remainder of x/7 is 0:
	step 4: 	Print "yes", goto step 7.
	step 5: else
	step 6: 	Print "no", goto step 7.
	step 7: End
*
*
*/

#include<stdio.h>

//Function defination / function body
int multiple_of_7(int x)
{
	if(x%7==0)
	{
		printf("The give number is multiple of 7.\n");
	}
	else
		printf("The given number does not gets divided by 7 exactly.\n");
	return 0;
}

int main(void)
{
	int number;
	printf("Enter a vlaue you want to check for:\n");
	scanf("%d",& number);
	
	multiple_of_7(number);
	
	return 0;
}
