/* Add the following elements in arrays:
 * A = [1, 2, 3, 4, 5], B = [5, 10, 15, 20, 25]
 * Display the result in C, an array with 5 elements.
 */

/* An array is a collection of variables. The variables are denoted by a common name. The variables are homogeneous in nature. They take on the same kind of values. Arrays start from subscript index 0 to SIZE-1 where SIZE is the size of array. */

/* Algorithm: 
 *
 * Step 1: Start
 * Step 2: Declare A, B, and C as arrays of size 5.
 * Step 3: Initialize A and B with the values provided above.
 * Step 4: for every element i in C, (i starts from 0 and ends at 4)
 * 		C[i] = A[i] + B[i]
 * Step 5: Print C
 * Step 6: Stop
 */

#include<stdio.h>
#define SIZE 3

int main(void)
{
	int A[SIZE], B[SIZE], C[SIZE], i;
	
	printf("Please enter the values for two arrays A and B:\n");

	for(i=0; i<SIZE; i++)    // i takes 3 values: 0, 1, 2
	{
		printf("A[%d]:\n", i);   //A[2]:
		scanf("%d", &A[i]);      //user enters some value into A[2]
		printf("B[%d]:\n", i);   //B[2]:
		scanf("%d", &B[i]);	 //user enters into B[2]
		C[i] = A[i] + B[i];	 //C[2] = A[2] + B[2]
	}
	
	for(i=0; i<SIZE; i++)
	{
		printf("C[%d] = %d\n",i,  C[i]);
	}
	return 0;
}






