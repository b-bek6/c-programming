#include<stdio.h>
int main(void){
	int min, max, n, i, count;
	printf("Enter min and max");
	scanf("%d%d",&min,&max);
	
	for(n=min;n<=max;n++){
		count=0;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				count++;
				break;
			}
		}
		if(count==0 && n!=1){
			printf("%d\n",n);
		}
	}
}
