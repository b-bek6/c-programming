#include<stdio.h>
int main(void){
	int a[10],i,j,n,temp;
	printf("Enter total number: \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d number:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j=n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	

}

