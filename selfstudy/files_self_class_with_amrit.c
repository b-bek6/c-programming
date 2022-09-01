#include<stdio.h>
#define x 3
#define y 3

int main(void){
	
	int a[x][y],c[x][y],b[x][y],i,j;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Enter for matrix A a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Enter for matrix B b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}return 0;
}

