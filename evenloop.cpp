#include<stdio.h>
int main(void)
{
	int a,i;
	printf("enter any number for even number");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		if (i%2==!0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
