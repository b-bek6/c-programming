#include<stdio.h>
struct student{
	char name[20];
	int roll;
	char address[20];
}st;
int main(void){
	FILE *fp;
	fp= fopen("bord.txt","w+");
	if(fp==NULL)
		printf("Error while opening file");
	else
		printf("File is opened successfully");
	int i,n;
	printf("How many students are there? \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter the name roll and address of %d student",i+1);
		scanf("%s%d%s",&st.name,&st.roll,&st.address);
		fwrite(&st,sizeof(st),1,fp);
	}
	rewind(fp);
	printf("\n name\t roll\t address");
	while(fread(&st,sizeof(st),1,fp)==1){
		printf("\n%s\t%d\t%s",st.name,st.roll,st.address);
	}
	fclose(fp);
}
