#include<stdio.h>
struct student{
	int sno;
	char name[20];
	char address[20];
};
int main(void)
{
	struct student st;
	FILE *fp;
	fp = fopen("student.txt","w+");
	int n,i;
	printf("Enter the total number of student:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name symbol no and address of student:\n");
		scanf("%s%d%s",&st.name ,&st.sno ,&st.address);
		fwrite(&st,sizeof(st),1,fp);
	}
	rewind(fp);
	printf("\n Name\tSymbolNo\tAddress");
	while(fread(&st,sizeof(st),1,fp)==1){
		printf("\n%s\t%d\t%s",st.name,st.sno,st.address);
	}
	fclose(fp);
	return 0;
}
