/* If the user pressses 'a', give him some words starting with'a', if the user select'b', print some words that startwith 'b', and it the user does not select 'a' or 'b', default print "select 'a' or 'b' only. */

#include<stdio.h>

int main(void)
{
	char user_letter;
	do
	{
		
	
		printf("Please press \'a\' or \'b\' for fun you can press \'e\' to exit: \n");
		scanf("%c",&user_letter);
		
		switch (user_letter)
		{
			case 'a':
					printf("apple, aeroplane, area\n");
					break;
			case 'b':
					printf("banana, ball,ballon...\n");
					break;
			default:
				printf("can\'t you select a or b\?\n");
				break;
		}
	}
	return 0;
}
