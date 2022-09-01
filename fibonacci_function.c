/* Generate fibonacci series 0, 1, 1, 2, 3, 5, 8, 13,....n */

/* ALGORITHM:
 * Step 1: Start
 * Step 2: Initialize a = 0, b = 1, and c where a and b are first two terms of the sequence, and c is a temporary variable.
 * Step 3: Ask user for the last term of the sequence n.
 * Step 4: for i from 1 to n:
 * Step 5: 	c = a
 * Step 6:	a = b
 * Step 7:	b = c + b
 * Step 6: 	print b
 * Step 7: End
 *
 */

#include<stdio.h>

void fibonacci(int n);    // function declaration/signature/prototype

int main(void)
{
	int limit;
	printf("Please provide the number of terms in a fibonacci sequence to display:\n");   
	scanf("%d", &limit);

	fibonacci(limit);   //function call/invocation

	printf("\n");
	return 0;
}

void fibonacci(int n)
{
	int a = 0, b = 1, c, i;
	for(i = 1; i <= n; i++)
	{
		
		printf("%d\t", b);
		c = a;                          // 0, 1, 1, 2, 3, 5....
		a = b;                          // because this line will overwrite the value of a we have c=a
		b = c+b;
	}
}

