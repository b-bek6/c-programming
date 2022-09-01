/* This program prints 100 odd integers using the do...while loop
* Theory:
*		do ...while; is a looping technique where at least a statement is exexuted abd continued unless\
*		the condition inside while loop is false.
*	SYNTAX:
*
*	initialization;
*	do
*	{
*		statement1;
*		optional {statement2....n};
*
*	}while(condition);
* */

#include<stdio.h>

int main(void)
{
	printf("this program prints 100 odds\n");
	int i;
	i=1;
/*while(i<100)
	{
		printf("%d\t",i);
		i++;
	}*/
	do
	{
		printf("%d\t",i);
		i++;
	}while(i<=100);
	
	return 0;
}

