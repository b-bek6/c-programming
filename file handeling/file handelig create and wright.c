#include<stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("c:\\text.txt","w");

    if (fp==NULL)
        printf("\n File create fail.");
    else
        printf("File create success");
    fputs("\n Hello, I am admin e Nepal",fp);
    fclose(fp);
    return 0;
}