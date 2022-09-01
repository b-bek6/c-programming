#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    struct studentdata
    {
        int roll;
        char name[50];
        float grade;
    };
    struct studentdata sl;
    int roll, flag=0;
    FILE *fp;
    fp = fopen("C:\\Users\\Bibek\\Desktop\\c programming\\extraproject\\studentdata.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be open\n");
    }
    printf("Enter the roll no. of student which you want to search\n");
    scanf("%d",&roll);
    while(fread(&sl,sizeof(sl),1,fp)==0)
    {
        if(sl.roll==roll)
        {
            flag=1;
            printf("record is found\n");
            printf("%s %d %f",sl.name,sl.roll,sl.grade);
        }
    }
if(flag==0)
{
    printf("Not found");
}
fclose(fp);
}