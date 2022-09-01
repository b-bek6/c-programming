/* Call by value */

#include<stdio.h>

int twice(int x)
{
	printf("Inside before updating: %d is x \n", x);
	
	x=x*2;
	
	printf("Inside after updatin: %d is x \n\n", x);
	
	return (x);
}

int main(void)
{
	int x = 2, y;
	printf("Before: %d is x \n\n", x);
	
	y = twice(x);
	
	printf("After: %d is x \n\n", x);
	
	return 0;
}

