/* Add the following elements in arrays:
* A=[1,2,3,4,5], B=[5,10,15,20,25]
*Display the result in C, an array with 5 elements.
*/

/* An array is a collection of variables. The variables are denoted by a common name. The variables are homogenous in naature. They take on the same kind of values. Arrays start from subscript iindex 0 to SIZE-1 where SIZE is the size of array. */

/*Algorithm:
*
* Step 1: Start
* step 2: Declare A, B, and C as arrays of size 5.
* step 3: Initialize A and Bwith the values provided above.
* step 4: For every element i in C, (i starts from 0 bd ends at 4)
			4a: C[i] = A[i] + B[i]
* step 5: Print c
* step 6: Stop
*/


#include<stdio.h>
#define SIZE 5

int main(void)
{
	int C[5], i;
	
	int A[5] = {1, 2, 3, 4, 5};
	int B[5] = {5, 10, 15, 20, 25};
	
	for (i=0;i<5;i++)
	{
		C[i]= A[i] + B[i];
		printf("%d\n",C[i]);
	}
	
	return 0;
}

