#include<stdio.h>

int main(void){
	FILE *fp;
	char name[100];
	fp=fopen("bg.txt","w");
	if (fp==NULL)
		printf("Error while opening file");
	else{
		printf("File opened successfully\n");
		printf("What do you want to right inside file\n");
		scanf("%[^\n]s",&name);
		fwrite(&name,1,100,fp);
		fclose(fp);
	}
}
