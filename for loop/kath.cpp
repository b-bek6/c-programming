#include<stdio.h>

int main(void)
{
	char A[10]="KATHMANDU";
	int i,j;
	
	for(i=3;i>=0;i--)
	{
		for (j=0;j<=i;j++)
		{
			printf("%c  ",A[j]);
		}
		printf("\n");
	}
}
