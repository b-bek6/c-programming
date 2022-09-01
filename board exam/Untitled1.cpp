#include<stdio.h>
int main(void)
{
	FILE *fp;
	char str[20];
	fp=fopen("student.txt","w");
	printf("Enter any string");
	scanf("%d",&str);
	fprintf(fp,"%s",str);
	fclose(fp);
	rename("student.txt","bibek.txt");
	remove("bibek.txt");
}
