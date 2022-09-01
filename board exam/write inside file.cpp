#include<stdio.h>
int main(void){
	FILE *fp;
	fp=fopen("pp.txt","w+");
	char in[100];
	printf("Write inside file:\n");
	fgets(in,100,stdin);
	fputs(in,fp);
	fclose(fp);
	
	
}
