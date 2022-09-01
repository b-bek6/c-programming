/* Generate fibonacci series 0, 1, 1, 2, 3, 4, 8, 13, ...... n */

/* ALGORITHM:
	step 1: Start
	step 2: Initialize a = 0, b = 1, and c where a and b are first two terms of the sequence and c is temporary variable.
	step 3: Ask user for the last term of the sequence n.
	step 4: For i from 1 to n: 
	step 5: 	c = a
	step 6:		a = b
	step 7:		b = c + b
	step 8:		print b
	step 7: End
	
	*/

#include<stdio.h>

int fibonacci(int n)		// Function declaration/signature
{
	int a = 0, b = 1, c, i;
	
	for (i=0;i<=n;i++)
	{
		printf("%d\t",b);	
		c = a;
		a = b;
		b = a+c;
			
	}
}

int main(void)
{
	int a,b,c,i,limit;
	
	printf("Please enter the number of terms of fibonacci series: ");
	scanf("%d",& limit);
	
	fibonacci(limit);		//function call/invocation
}
