




#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
	float X[ROW][COL] = {{1,2,-4},{3,4,-9},{5,-5,10}};
	printf("%f\n", X[1][2]);
	
	return 0;
}
