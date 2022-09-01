/* Call by value program demonstration. */

#include<stdio.h>

void twice(int x);
int thrice(int );

int main (void)
{
	int x, thrice_of_x;
	x = 2;
	printf("Before function call: %d\n", x);
	
	twice(x);
	
	printf("After function call: %d\n", x);

	thrice_of_x = thrice(x);
	printf("\n%d times 3 is %d\n", x, thrice_of_x);
	
	return 0;
}

void twice(int x)
{
	x = x*2;
	printf("Inside function: %d\n", x);	
}

int thrice(int a)
{
	a = 3*a;
	return a;
}
