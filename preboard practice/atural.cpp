#include<stdio.h>
int main(void)
{
	int i;
	for (i=0;i<=1000;i++)
	{
		if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
			printf("%d\t",i);
	}
	return 0;
}
