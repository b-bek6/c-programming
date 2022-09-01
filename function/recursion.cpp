
/* When a function calls itself then it is recursion.


*/

#include<stdio.h>

int natural_sum (int n)
{
	if (n == 1)
		return 1;
	else
		return natural_sum(n-1) + n;	// n-1=9+n =  natural_sum(9)+10, natural_sum(1)+10+9+8+7.....+2
		
}

int main(void)
{
	int x = naturl_sum(10);
	printf("%d\n",x)
	
	return 0;
}
