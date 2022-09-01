/This program will make use of break and continue inside loops. This will print from 100 to 1 but it will not print the multiple of 10. */


#include<stdio.h>

int main(void)
{
	int i;
	
	for (i=100;i<=1;i--)
	{
		if(i%10!=0)
			continue;		// do not run the code in the continur, and after for once
			
		printf("%d  ",i);
	}
	printf("\n");
	return 0;
}
