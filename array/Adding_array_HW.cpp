/*Define three arrays of SIZE size, add them into the fourth, subtract them. The arrays should be of floating type.*/

#include<stdio.h>
#define SIZE 3

int main(void)
{
	float A[SIZE], B[SIZE], C[SIZE], D[SIZE];
	int i;
	
	printf("Enter the values for three array: \n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("A[%d]: ",i);
		scanf("%f",&A[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("B[%d]: ",i);
		scanf("%f",&B[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("C[%d]: ",i);
		scanf("%f",&C[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		D[i]=A[i]+B[i]+C[i];
		printf("Addition of A[%d]+B[%d]+C[%d] = %f: \n",i,i,i,D[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		D[i]=A[i]-B[i]-C[i];
		printf("Subtraction of A[%d]-B[%d]-C[%d] = %f: \n",i,i,i,D[i]);
	}
}
