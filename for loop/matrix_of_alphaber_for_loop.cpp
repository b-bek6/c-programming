/* Print 26 * 26 matrix of alphabets using for loop */

#include<stdio.h>

int main(void)
{
	int i,j;
	
	for(i=1;i<=26;i++)
	{
		for(j='a';j<='z';j++)
		{
			printf("  %c",j);
		}
		printf("\n");
	}
	return 0;
}
