/* Program to check if a number is odd or even. */
/* UNARY Operator:
* X++,--X,++X ,X-- because the operators ++,-- take only single variable.
*
*BINARY Operator:
* +,-,*,<,>,=,==,....binary because they have to use at least two
variables. eg. x=y,a+b,.....
*
* TERNARY Operator:
* Takes three variables:
*
*SYNTAX:
*(condition)?TRUE:FALSE
	eg2>3?True:false
		similar to:
		if(2>3)
				printf("true");
		else
				printf("false");
*/

/*#include<stdio.h>

int main(void)
{
	int x=3,y;
	y = (x>20) ? 1 : 5; //if (x>2) is true, y takes 1, otherwise 5
	printf("%d is y",y);
} 
*/

#include<stdio.h>

int main(void)
{
	int x=3,y;
	y = (x>20) ? x : y; //if (x>2) is true, y takes 1, otherwise 5
	printf("%d is y",y);
}
