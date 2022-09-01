#include<stdio.h>
int main(void)
{
	FILE *fp;
	char name[20];
	fp=fopen("bg.txt","w");
	
	if(fp==NULL){
		printf("error while opening file");
	}
	else{
		printf("File is opened successfully");
		scanf("%[^\n]s",&name);
		fwrite(&name,20,1,fp);
		
	}
	fclose(fp);
	return 0;
}
