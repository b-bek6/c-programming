#include<stdio.h>

int main(void)
{
	FILE *fp;
	char s[100];
	fp = fopen("bg.txt","r");
	
	if (fp==NULL)
		printf("\nFile not found.");
	else
		printf("\n File is open.");
	fgets(s,100,fp);
	printf("\nData inside file is:\n %s",s);
	
	printf("Do you want to create any changes?");
	scanf("%c",&s);
//	
//	if (a='Y')
//	{
//		
//	}
//	fclose(fp);
	return 0;
}
 
