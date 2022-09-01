/* Progeam to show declarations, expressions, and assignments. */

#include<stdio.h>

int main(void)
{
	int x; //Declaring x to be an tnteger varuable.
	
	float y,z, sum, product;
	printf("Enter the value of x:\n ");
	scanf("%d,&x");
	//x=5;				 //expression as in basic algebra.
	y=6;				// difference being that y is not equal to 6, rather, y is assigned the value 6
	z=2*x;				// z is assigend 2 times the value of x=> z==10
	sum=x+y+z;			//this is also an expression
	product = x*y*z;		
	
	printf("The value of x, y and z are %d, %f, and %f"x,y,z,sum,product);
	
	return 0;
}
