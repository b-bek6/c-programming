/* progtram to print a n*n matrix of 1; n is given by the user.*/

#include<stdio.h>

int main(void)
{
	int n,a,b;
	a=1;
	
	printf("Please enter base of square matrix: ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		b=1;
		while(b<=n)
		{
			printf("1");
			b++;
		}
		a++;
		printf("\n");
	}
}
