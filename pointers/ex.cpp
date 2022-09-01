#include<stdio.h>

int main(void)
{
	int *a,b;
	b=1;
	*a=b;
	
	printf("%d/t %d",*a,b);
	return 0;
}
