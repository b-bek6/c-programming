/* 1+2+3+4+5.......+n */

#include<stdio.h>

int sum_of_natural (int n )
{
	int i,sum;
	for (i=1;i<=n;i++)
	{
		sum += i;
		return (sum);
	}
}
int main(void)
{
	int limit,result;
	printf("Please enter how many numbers do you want the sum (of natural numbers)\?\n");
	scanf("%d",& limit);
	
	result = sum_of_natural (limit);
	printf("%d",result);
	return 0;
}

//int natural_sum(int n)

