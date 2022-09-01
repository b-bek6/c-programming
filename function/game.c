#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int number;
int i,t,n;
int guess;
static int count=1;  // static jatichoti input hunxa teti choti badxa
srand(time(0));
// (upper - lower + 1 )+ lower;
number = rand() % (10 - 1 + 1) + 1;
printf("\n\n**************************** Welcome to Number Guessing  Game ***********************\n\n");
printf("\t*********************** Made by Bibek Ghimire *************************\n\n");
printf("Enter the numbers of players:\n");
scanf("%d",&n);

printf("Guess the number between 1 and 10:\n");
for(t=0;t<n;t++)
{
printf("Turn of player %d\n",t+1);
scanf("%d",&guess);
for (i = 0; i=guess; i++)
{
    
if (guess>number)   
{
    printf("Enter lower number\n");
    scanf("%d",&guess);
}
else if (guess<number)
{
    printf("Enter higher number\n");
    scanf("%d",&guess);
    
}
else if (guess==number)
{
    printf("You Guessed the correct Answer in %d attempts.\n\n",count);
    printf("_____________________________________________________________________________________________________________________________________\n\n");
    break;
}
count++;

count = 1;

}
    return 0;
}