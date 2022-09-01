/* In mathematics:
 * Function: A function is a relation from a set of inputs to a set of possible outputs where each input\
 * is related to exactly one output.
 *  
 *  f(x) = y;   // x is a variable. y is a variable but y is result of f(x), and for each unique x, there\
 *  corresponds a y.
 *  For eg:
 *    y = f(x) = x+1 
 *    when
 *    x = 0, y = 1
 *    x = 3, y = 4
 *
 *    y = f(x) = x^2
 *    when 
 *    x = 1, y = 1
 *    x = -1, y = 1
 *    x = 2, y = 4
 *    x = -2, y = 4
 *
 *
 * Functions are building block of any program. They are flexible. They are the heart of programming. \
 * In C, or in any other language, functions make programming proper. They help reduce code. They help \
 * reduce code repetition. 
 * 
 * SYNTAX: 1. function body: (note: < inside this > are optional here.) 
 *
 * 	<return_type>  function_name(<input_parameters>)
 * 	{
 * 		statement1;
 * 		statement2;
 * 		...
 * 		statementn;
 * 		<return value>;
 * 	}
 * 		
 * 	2. function call/invocation:
 *
 * 	<variable> = function_name(<input_parameters>);  
 *
 * 	3. function declaration:
 *
 * 	<return_type> function_name (<input_parameters>);
 *
 */


/* This program (machine) takes in an integer number and returns twice a given number.*/

#include<stdio.h>

int twice(int x)
{					      // function definition 	
	return (2*x);
}

int main(void)
{
        int y, w, n, z, a, b, c;
	y = twice(3);
	a = twice(5);
	b = twice(9);
	z = twice(10);
	n = twice(500);
	w = twice(-9);
	printf("%d\t%d\t%d\t%d\t%d\t%d\t \n", y, a, b, z, n, w);
	return 0;
}


