#include<stdio.h>

int main(void)
{
	int a=1;
	printf("%d\n",--a); //print: 0 mem:0
	
	printf("%d\n",--a); //print: -1 mem: 0
	
	printf("final: %d\n",--a); //print: -2 mem -2
	
	return 0;

}
