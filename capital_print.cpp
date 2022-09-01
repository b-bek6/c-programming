#include<stdio.h>

int main(void)
{
	
	char user_given, changed_case;
	
	printf("Please enter any small letter: ");
	
	scanf("%c",&user_given);	
	
	changed_case = user_given + ('A'-'a');
	
	printf("The small letter for your letter is %c.\n",changed_case);
	
	return 0;
	
}
