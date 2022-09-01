/* Creating a function that takes in two values and returns their sum. */

#include<stdio.h>

float sum_of_two(float a, float b)
{
	return (a+b);
}

int main(void)
{
	float sum;
	sum = sum_of_two(9.0,8.0);		// sum_of_two(a=9.0, b=8.0 return(9.0+8.0) = return 17....sum = 17
	printf("%f", sum);
	
	return 0;
}
