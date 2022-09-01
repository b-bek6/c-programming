#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    struct studentdata{
        int roll;
        char name[40];
        float grade;
    };
    struct studentdata sl;
    char ch='y';
    FILE *fp;
    fp = fopen("C:\\Users\\Bibek\\Desktop\\c programming\\extraproject\\studentdata.txt","w");
    if(fp=NULL)
    {
        printf("Can not open");
    }
    while (ch=='y')
    {
        printf("enter the name of student:\n");
        fflush(stdin);
        gets(sl.name);
        printf("enter the roll no of student:\n");
        scanf("%d",&sl.roll);
        printf("enter the grade of student:\n");
        scanf("%d",&sl.grade);
        fwrite(&sl,sizeof(sl),1,fp);
        printf("Do you want to insert another rexord(y/n)\n");
        scanf("%s",&ch);
    }
    fclose(fp);

}