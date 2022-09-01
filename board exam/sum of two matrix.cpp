#include<stdio.h>
#define ROW 3
#define COLUMN 3
int main(void)
{
	int i,j,a[ROW][COLUMN],b[ROW][COLUMN],c[ROW][COLUMN];
	printf("\nFor Matrix A");
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			printf("\nA[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nFor Matrix B");
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			printf("\nA[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
