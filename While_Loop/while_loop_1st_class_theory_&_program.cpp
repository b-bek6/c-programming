/* Program to generate natural number, 1,2,3,........n */
/* while loop
* alters the flow of control
* SYNTAX:
*
*
*inilization statement: //for eg.. natural_number = 1 
* While(conditional)
* {
*		// if the conditional is true
*		statement1;
*		statement2;
*		.......
*		statement_n;
*		Increament statement;
* }
* statement_a;
*......
*
*Theory:
*		A while loop has the syntac as mentioned ablve. Teh whie loop executes the statements inside the curly brackets wntil the "conditional" is true. It breaks out when the condition becones false.
*
********************************************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************************************** */

#include<stdio.h>

int main(void)
{
	int natural_number;
	natural_number = 1;
	
	printf("we are printing natural numbers from 1 to 100.\n");
	
	while(natural_number <= 100)
	{
		printf("%d\t", natural_number);
		natural_number = natural_number + 1;
		//++natural_number;
		//natural_number++;
		//natural_number -= 2;  //a-=b==>a=a-b;
	}
	
	printf("\n***The loop has ended here.\n")
	
}

