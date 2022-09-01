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

