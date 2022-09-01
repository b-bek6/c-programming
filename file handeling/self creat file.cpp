#include<stdio.h>
int main(void)
{
	FILE *fp;
	fp = fopen("C:\\Users\\Bibek\\Desktop\\New folder\\bk.txt","w");
	if (fp==NULL)
	{
		printf("\n File is not created.");
	}
	else
	{
		printf("File is created successfully.");
	}
	fputs("Hello My name is Bibek Ghimire",fp);
	fclose(fp);
	return 0;
}
