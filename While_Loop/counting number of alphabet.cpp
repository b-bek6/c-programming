/* counting the number of alphabets. */

#include<stdio.h>

int main(void)
{
	int alphabet='a', count = 0;
	
	while(alphabet <= 'z')
	{
		count++;
		alphabet++;
		printf("There are %d alphabets from \'a\'to \'z\'.\n",count);
	}
	printf("There are %d alphabets from \'a\'to \'z\'.\n",count);
	return 0;
}
