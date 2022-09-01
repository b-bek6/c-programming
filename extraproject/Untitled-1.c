#include<conio.h>
#include<stdio.h>

int main(void)
{
    char a[100];
    FILE *fp;
    fp = fopen("studentdata.txt","r");
    if (fp=NULL)
    {
        printf("File opening error");
    }
    else
    {
        printf("FIle is open successfully");
        fgets(a,100,fp);
        printf("Data inside the file is: \n %s",a);
    }
    return 0;
}