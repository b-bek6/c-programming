/*Print this using while loops:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
*/

#include<stdio.h>

int main(void)
{
	int a,b;
	a=1;
	
	while (a<=5)
	{
		b=1;
		while (b<=a)
		{
			printf("%d\t",b);
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
}
