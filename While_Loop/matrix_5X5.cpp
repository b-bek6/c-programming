/* Program to Print a 5 * 5 matrix of '*' using while loops.*/

#include<stdio.h>

int main(void)
{
	int a,b;
	a=1;
	
	while(a<=5)
	{
		b=1;
		while(b<=5)
		{
			printf("*\t");
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
	
}
