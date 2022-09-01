/* This program prints "*" many times but using nested for loops. */

#include<stdio.h>

int main(void)
{
	int count_outer, count_inner;
	char asterik;
	asterik = '*';
	for (count_outer = 1; count_outer < 3; count_outer++)
	{
		printf("Outer *\'s:\n");
		for(count_inner=3; count_inner > 0; count_inner --){
			printf("Inner *\'s:%c\t", asterik);
		}
		printf("\n");
	}
return 0;
}

