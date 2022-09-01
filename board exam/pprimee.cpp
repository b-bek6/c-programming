#include<stdio.h>
int main(void){
	int n,i,count=0;
	printf("Enter any number");
	scanf("%d",&n);	
	
	for (i=2;i<=n;i++){
		
		if (n%i==0){
			count+=1;
		}
	}
	if(count==2)
		printf("prime number");
	else
		printf("composite number");
	
	return 0;
}
