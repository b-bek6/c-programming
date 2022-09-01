#include<stdio.h>

int main(void)
{
	FILE *fp;
	char root[50];
	fp = fopen("bg.txt","w+");
	
	if(fp == NULL)
	{
		printf("The file does not exist.");
	}
	else
	{
		printf("Enter the test:");
		scanf("%[^\n]s",&root);
		fprintf(fp,"%s",root);
	}
	fclose(fp);
	return 0;
}
