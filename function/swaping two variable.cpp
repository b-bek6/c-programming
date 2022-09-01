/* swap two numbers:
* intitally : a = 2, b = 3
*finclly: a=3, b=2
*/

#include<stdio.h>

void swap(int a, int b)
{
	int c; //local variable only
	c=a;	//a and b are local as well
	a=b;
	b=c;
}

int main(void)
{
	int a = 2, b = 3, c;
	
	swap(a,b);							// actual variable do not get passed. only copies.
	
	printf("a = %d\t, b = %d\t", a, b);	//b = 2, a = 2
	printf("%d",c);
	return 0;
}
