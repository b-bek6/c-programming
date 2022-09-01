/*In mathematics:
*FUnction: A function is a ralation from a set of inputs to a set of possible outputs where each input\
*is related to exactly one output.
*
*f(x)=y;  //x is a variable. Y is a variable but y is result of f(x), and for each unique x there corresponds a y.
*for example:
	f(x) = x+1
	when
	x = 0, y = 1
	x = 3, y = 4
	
	y = f(x) = x^2
	when 
	x = 1,y = 1
	x = -1, y = 1
	x = 2, y = 4
	x = -2, y=4
*
*
/* Functions are building block of any program. They are flexible. They are the heart of programming.
* In C, or in any other language, function make programming proper. They help reduce code.They help 
*reduce code repetition.
*
*
*SYNTAX:function body (note: <inside this > are optional here.)
*	
*	<return type> function_name(<input_paramaters>)
*	{
*		statement1;
		statement2;
		....
		statementn;
		<return Value>;
	}
	
	2. functioin call/invocation:
	
	<variable>= function_name(<Input_parameter>);
	
	3. Function decalaration:
	
	<return_type> function_name (<input_parameters>);
	
*
*
*/


/* This program (machine) takes in a number and returns twice a given number. */

#include<stdio.h>

int twice(int x)
{
	return (x*2);
}

int main(void)
{
	int y,a,b,c,d,e;
	y = twice(3);
	a = twice(5);
	b = twice(6);
	c = twice(-9);
	e = twice(3500;
	printf("%d, %d, %d, %d, %d, %d \n",y);
	return 0;
}

	
