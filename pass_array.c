/* Passing arrays into functions. */

#include<stdio.h>

int sum_of_array(int y[]);    // this function will take in an array of integers, add the values and returns

int main (void)
{
	int x[4] = {1, 3, 5, 6}, total_sum;
	
	total_sum = sum_of_array(x);   //sum_of_array will return sum

	printf("%d is the sum of array contents\n", total_sum);

	return 0;
}

int sum_of_array(int y[])
{
	int sum = 0, i;
	for(i=0; i<4; i++)
		sum = sum +y[i];
	return sum;
}




