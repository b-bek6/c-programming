#include<stdio.h>
int main(void){
	int a,b,max;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	max=a>b? a:b;
	printf("%d",max);
}
