/* Program to find odd or even number */

#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter any number: \n");
    scanf("%d",&num);

    if ( num % 2 == 0)
        printf("%d is even number.\n",num);
    else 
        printf("%d is odd number.\n",num);
    return 0;
}