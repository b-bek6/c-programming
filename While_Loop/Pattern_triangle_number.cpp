/* progtram to print number pattern Print
4  4   4   4
3  3   3
2   2
1
using while loops.*/

#include<stdio.h>

int main(void)
{
	int a,b;
	a=4;

	while(a>=1)
	{
		b=1;
		while(b<=a)
		{
			printf("%d\t",a);
			b++;
		}
		a--;
		printf("\n");
	}
}
