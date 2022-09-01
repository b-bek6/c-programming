#include<stdio.h>
#define SIZE 3

int main(void)
{
	int C[SIZE], i, B[SIZE], A[SIZE];
	
	printf("Please enter the values of two arrays A and B: \n");
	
	for (i=0;i<SIZE;i++)
	{
		printf("A[%d]:\n",i);
		scanf("%d", &A[i]);
		printf("B[%d]:\n",i);
		scanf("%d", &B[i]);
		C[i]= A[i] + B[i];
	}
	
	for(i=0; i<SIZE; i++)
		printf("%d\n", C[i]);
	return 0;
}
