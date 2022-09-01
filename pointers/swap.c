#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	float percentage;
}s[10];
int main(void){
	int n,b,i;
	printf("Enter the total no of student");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("Enter the name of %d student: ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the roll no of %d student: ",i+1);
		scanf("%s",&s[i].roll_no);
		printf("Enter the percentage of %d student: ",i+1);
		scanf("%f",&s[i].percentage);
		printf("\n");
	}
	for (i=0;i<n;i++){
		if (s[i].percentage>60)
		{
			printf("%s\t",s[i].name);
		}	
	}
	
	
}

