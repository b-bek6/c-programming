#include<stdio.h>

 int main(void)
 {
 	FILE *fp;
 	char s[1000];
 	fp = fopen("C:\\Users\\Bibek\\Desktop\\New folder\\ntext.txt","r");
 	
 	if (fp==NULL)
 	{
 		printf("\n Cannot open file.");
 		
	}
	else
	{
		printf("\n file is opened.");
	}
	fgets(s,100,fp);
	printf("\n text from file is: %s",s);
	fclose(fp);
	return 0;
 }

