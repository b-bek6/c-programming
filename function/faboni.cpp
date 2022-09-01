/* Generate fibonacci series */

#include<stdio.h>

int fabonacci( int n)
{
	int a = 0, b = 1, c, i;
	
	for (i=0;i<=n;i++)
	{
		printf("%d\t",b);
		c = a;
		a = b;
		b = a + c;
	}
}

int main(void)
{
	int a, b, c, i, limit;
	
	printf("Please enter for n: ");
	scanf("%d",&limit);
	
	fabonacci(limit);
}
