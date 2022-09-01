#include<stdio.h>
int main(void)
{
	float a;
	int b,c,d,e;
	printf("enter the total distance in (KM): ");
	scanf("%f",&a);
	e=a*1000;
	b=e/1000;
	c=(e % 1000)/100;
	d=(e % 100);
	printf(" %d KM, %d M, %d cm",b,c,d);
	return 0;	
}
