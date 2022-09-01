#include<stdio.h>
int main(void)
{
    int a;
    char respond;
    printf("*************Welcome To Liberary***************");

    printf("\n Do you want to return a book or take a book");
    re:
    printf("\n Press and enter (t) for take and (r) for return:\n");
    scanf("%c",respond);

    if (respond=='t')
    {
        printf("\n You have choosen to take a book: \n");
    }
    else if (respond=='r')
    {
        printf("\n You have choosen to return a book: \n");
    }
    else
    {
        printf("You\'ve entered invalid character:");
        // goto re;
    }

}