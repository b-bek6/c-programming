/* Print from "a" to "z" using while loop.
*/

#include<stdio.h>

int main(void)
{
	char letter;
	letter=97;
	
	while (letter<= 122)
	{
		printf("%c\t",letter);
		letter++;		
	}
	return 0;
}
