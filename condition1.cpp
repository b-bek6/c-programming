/* Flow of control: if.....else statement +,-,*,/,++,--,==,!=  
/* Checks if a number is even or not. */

#include<stdio.h>

int main(void)
{
	int x;
	printf("please enter an integer: \n");			//declaration x to be an integer
	scanf("%d",&x);									//user information
													//waits for keyboard input,\
													//whatever entered is ssigned to x(address of x)
													
	if (x%2 !=0)									//checks if x divided by 2 gives remainder 0, 3%2=1
		printf("The give integer is odd.\n");
	else
		printf("You entered an even intiger");
	
	return 0;
}

// x%2==0 (even) x%2==1 (odd)

/* if....else...

*if(conditional)
*		statement if true;
*	
*else
*		statement if false;
*/
