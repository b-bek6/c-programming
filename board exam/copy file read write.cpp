#include<stdio.h>
int main(void){
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("pp.txt","r");
	fp2=fopen("pp2.txt","w");
	while ((ch=getc(fp1))!=EOF){
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
