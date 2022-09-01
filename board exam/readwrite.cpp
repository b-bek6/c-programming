#include<stdio.h>
#include<conio.h> 
int main(void)
{
FILE *fp1,*fp2; 
char ch;
fp1=fopen("pp.txt","r"); 
fp2=fopen("xyz.txt","w"); 
while((ch=getc(fp1))!=EOF) 
{
putc(ch,fp2); 
}
fclose(fp1); 
fclose(fp2); 
return 0; 
}
