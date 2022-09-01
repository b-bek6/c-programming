#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int number, i, n, t, guess;
	int password;
	static int count = 1;
	srand(time(0));
	number = rand() % (10 - 1 + 1) + 1;
	again:
	
	printf("Please Enter the password: ");
	scanf("%s",&password);

	if (password ==1234)
	{
	printf("**********************Welcome To number Guessing Game*********************************\n");
	printf("***********************Game was created by Bibek Ghimire********************************\n");
	printf("\n Enter the number of players:\n");
	scanf("%d",&n);
	printf("Enter the number between 1 and 10\n`");

	for(i=0;i<n;i++)
	{
		printf("Turn of %d player:\n",i+1);
		scanf("%d",&guess);

		for (t=0;t=guess;t++)
		{
			if(number<guess)
			{
				printf("Enter smaller number:\n");
				scanf("%d",&guess);
			}
			else if(number>guess)
			{
				printf("Enter greater number:\n");
				scanf("%d",&guess);
			}
			else if(number==guess)
			{
				printf("Congratulations, Your guess is correct,\nTotal attempts were %d\n",count);
				printf("_______________________________________________________________________________\n");
				break;
			}
			count++;
		}
		count=1;

	}
	}
	else 
	{
		printf("Sorry, the password is incorrect.\n Try again...\n");
		goto again;
	}
}
