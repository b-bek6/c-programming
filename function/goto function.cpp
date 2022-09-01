/* Using goto 
* The use of goto in a program is not considered good as it creates .... just like spagetti
 spagetti
*/

#include<stdio.h>

int main(void)
{
	first: printf("This is first.\n");
	second: printf("This is second. \n");
	third: printf("This is second. \n");
	
	goto first;
	goto third;
	goto first;
	goto second;
	
	return 0;
	
}
