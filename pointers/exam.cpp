#include<stdio.h>

int main(void)
{
    char name[50];
    FILE *fp;
    fp = fopen("C:\Users\\Bibek\\Desktop\\New folder\\name","r");
    if(fp=NULL)
    {
        printf("error");
        exit(1);
    }

}
