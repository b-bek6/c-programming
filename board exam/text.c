#include<Stdio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("Bibek.txt","w");
	if(fp==NULL){
		printf("Error!!!");
	}
	else
	{printf("File opened successfully.");
	}
	
	char st[100];
	printf("enter any thing:");
	scanf("%c",&st);
	fputc(st,fp);
	fclose(fp);
	return 0;
}
