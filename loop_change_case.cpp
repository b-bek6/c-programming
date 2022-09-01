#include<stdio.h>

int main(void)
{
	
	char user_given,change_case;
	
	printf("please enter any character: ");
	
	scanf("%c",&user_given);
	
	if (user_given<96)
	{
		change_case= user_given+('a'-'A');
		printf("You've entered capital letter so changed case is: %c\n",change_case);
	}
	
	else 
	{
	change_case= user_given-('a'-'A');
	printf("You've entered small letter so changed case is: %c\n",change_case);	
	}
}
