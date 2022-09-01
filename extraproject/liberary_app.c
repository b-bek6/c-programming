#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    char respond;
    struct bookname{
        int symbol_no;
        char name[20];
    };
    struct bookname bn;
    {
        /* data */
    };
    
    char symbol_no,bookname;
    FILE *fp;
    
    printf("*************Welcome To Liberary***************");

    printf("\n Do you want to return a book or take a book");
    re:
    printf("\n Press and enter (t) for take and (r) for return:\n");
    scanf("%c",&respond);

    if (respond=='t')
    {
        printf("\n You have choosen to take a book: \n");
        /************************************This program will work to find book in liberary***********************/
        fp = fopen("liberary.txt","r");
        if (fp == NULL)
        {
            printf("Sorry liberary file not found");
            exit (0);
        }
        else
        {
            printf("Enter the Symbol NO. of the Book\n");
            scanf("%d",& symbol_no);
            while (fread(&bn,sizeof(bn),1,fp)!=NULL)
            {
                printf("My name is bibek");

            }
        }
        printf("\n Enter name or symbol no of the book:\n");
        scanf("%c",& bookname);

    }
    else if (respond=='r')
    {
        printf("\n You have choosen to return a book: \n");
    }
    else
    {
        printf("You ve entered invalid character:");
        goto re;
    }

}