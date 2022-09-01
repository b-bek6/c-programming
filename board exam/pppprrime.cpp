#include<stdio.h>
int main(void){
	int i,j,n,temp;
	printf("Enter the max n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=2;j<n-1;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j)
			printf("%d",i);
	}
}

