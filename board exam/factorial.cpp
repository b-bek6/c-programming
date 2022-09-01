#include<stdio.h>
int factorial(int f);
int main(void){
	int n;
	printf("Enter any number less than 15: ");
	scanf("%d",&n);
	factorial(n);
	return 0;
	}
int factorial(int f){
	int i;
	int s=1;
	for(i=1;i<=f;i++){
	s=s*i;
	}
	printf("%d",s);
}
