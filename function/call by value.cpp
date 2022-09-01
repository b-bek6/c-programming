/* Call by value example. */

#include<stdio.h>

int sum(int x, int y);

int main(void)
{
	int x = 7, y = 8, z;
	
	printf("Before function call: \n x = %d, y = %d \n",x,y); // x=7, y=8
	
	z = sum(x,y);
	
	printf("After functionn call: \n x = %d y = %d, z = %d \n", x, y, z); //9,10,19
	
}

int sum( int x, int y)				//sum (7,8) sum(x, y)
{
	x = 9, y = 10;
	
	printf("Inside function: x =%d, y= %d\n",x,y);	//x=9, y=10
	return (x+y);									//9+10=19
}
