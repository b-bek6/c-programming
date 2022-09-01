#include<stdio.h>
int main(void){
	int temp,i,j,n,a[20];
	printf("Enter the total no of elements:\n");
	scanf("%d",&n);
	
	printf("Enter the elements\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
