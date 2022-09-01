/*program to print 1000 multiples of 5; in doing so, please do not print multiples of 100 in them.*/

#include<stdio.h>

int main(void)
{
	int i;
	
	for  (i=5;i<=1000;i+=5)
	{
		if (i%100!= 0)
		{
			printf("\t%d",i);
		}
	}
}
