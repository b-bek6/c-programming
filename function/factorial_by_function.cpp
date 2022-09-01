/*Factorial of a number: recursive approach. */
/* Factorial of 5 or 5! = 1*2*3*4*5, and 10! = 1*2*3*.....*10,
*also, 0! = 1 and 1! = 1
*It can be seen that:
* 5! = 5*4! = 5*4*3! = ...
* Factorial(5) = 5*factorial(4) = 5*4*factorial(3)....5*4*3*2*factorial(1) = 5*4*3*2*1
*
*Write a program to find the factorial of given positive integer.

*/

#include<stdio.h>

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return(n*factorial(n-1));
}

int main(void)
{
	int n, fact;
	printf("Please enter the value of n: ");
	scanf("%d",n);
	
	fact = factorial(n);
	
	printf("The factorial of %d is %d",n,fact);

	return 0;
}
