#include<stdio.h>
int main(void)
{
	FILE *fp;
	char ch[100],n;
	fp= fopen("text.txt","w");
	if(fp==NULL){
		printf("Error while creating file. ");
	}
	else{
		printf("Type any thing you want to wright inside file:");
		scanf("%c",&ch);
		fwrite(&ch,sizeof(ch),1,fp);
	}
	printf("press Y for printing whats inside file:");
	scanf("%c",&n);
	if (n=='Y'){
		printf("The data inside file is:\n");
		fgets(ch,1,fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
