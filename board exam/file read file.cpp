#include<stdio.h>
int main(void){
	FILE *fp;
	char s[100];
	fp=fopen("student.txt","r");
	if(fp=NULL){
		printf("Error while opening file");
	}
	else{
		printf("File open success");
		fgets(s,100,fp);
		printf("The file contains:\n %s",s);
	}
}
