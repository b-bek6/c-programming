/*welcome to the bank 
admin or user
enter the username
enter the password
*/

#include<stdio.h>

int main(void)
{
	char a;
	double b;
	printf("Welcome to the bank\n");
	
	printf("Inter 'A' for admin and 'U' for user\n");
	scanf("%c",&a);
	
	if (a='A')
	{
		printf("Welcome Admin please enter password:\n");
	}
	else if (a='U')
	{
		printf("Enter username:\n");
		scanf("%c",&b);
		
		if (b='user')
		{
			printf("Enter password:\n");
		}
	}
	return 0;
	
}
