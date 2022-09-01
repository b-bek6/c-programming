/* Call by value example. */

#include<stdio.h>

int sum(int x, int y);

int main(void)
{
	int x = 7, y = 8, z;
	
	printf("Before function call:\n   x = %d, y = %d\n\n", x, y);          // x = 7, y = 8
       	
	z = sum(x, y);     // When sum(x,y) function is called x and y parameters (inputs) are actually copies of original variables and not the originals
	
	
	printf("After function call:\n   x = %d y = %d z = %d\n\n", x, y, z);   // 7, 8, 19
}


int sum(int x, int y)                                                          //sum(7, 8) sum(x, y)
{
	x = 9, y = 10;
	printf("Inside function:   x = %d, y = %d\n\n", x, y);                 //x=9, y=10
	return (x+y);                                                          //9+10 =19
}
