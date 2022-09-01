#include<stdio.h>
int main(void){
	FILE *fp;
	char in[100];
	fp=fopen("pp.txt","r");
	if (fp==NULL)
		printf("Error while opening file");
	else
		printf("\n File is opened successfully");
	printf("the data inside file is:\n");
	while (fscanf(fp,"%s",in)!=EOF){
		printf("%s",in);
	}
	fclose(fp);
	return 0;
}
