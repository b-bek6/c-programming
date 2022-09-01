#include<stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("C:\\Users\\Bibek\\Desktop\\New folder\\ntext.txt","w");
	
	if(fp==NULL)
	{
		printf("\n Cannot create file.");
		//exit(0);
	}
	else
	{
		printf("\n File is created.");
	}
	fputs("Hello my name is Bibek Ghimire And I am a B.sc.CSIT student of nepalaya", fp);
	fclose(fp);
	return 0;
}
