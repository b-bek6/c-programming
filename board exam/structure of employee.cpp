#include<stdio.h>
struct emp{
	char name[20];
	int age;
	float salary;
}employee[2];
int main(void){
	int i,n;
	printf("enter the total number of employee");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name age and salay of %d employee",i+1);
		scanf("%s%d%f",&employee[i].name,&employee[i].age,&employee[i].salary);
		
	}
	for (i=0;i<n;i++){
		printf("The name of %d employee is %s his age is %d and his salary is %f",i+1,employee[i].name,employee[i].age,employee[i].salary);
	}
	return 0;
}
