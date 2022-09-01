#include<stdio.h>
int main(void)
{
	FILE *fp;
	char x[100];
	fp=fopen("bg.txt","r");
	if (fp==NULL)
	{
		printf("Error while opening file");
	}
	else 
	{
		printf("File opens successfully");
		fgets(x,100,fp);
		printf("The content inside file is \n %s",x);
		fclose(fp);
		return 0;
	}
}
