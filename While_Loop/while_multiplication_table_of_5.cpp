#include<stdio.h>

int main(void)
{
	int a,b,c;
	b=1;

	printf("enter any number");
	scanf("%d",&a);
	c=a;
		
	while (a<=a*10 && b<=10)
	{
		printf("%d*%d=%d\n",c,b,a);
		a=a+c;
		b++;
	}
	return 0;
}
