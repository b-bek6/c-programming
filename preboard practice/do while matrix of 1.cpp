#include<stdio.h>
int main(void)
{
	int a,b;
	a=1;
	do{
		b=1;
		do{
			printf("1\t");
			b++;
		}while(b<=3);
		printf("\n");
		a++;
	}while(a<=3);
	return 0;
}
