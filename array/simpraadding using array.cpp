#include<stdio.h>

int main(void)
{
	int x[3]={3,4,5}; //decleratio
	
	//x is common name x[0],x[1],x[2] identified uniquely by their subscripts [], an array has  size defined within the square bracket.
	float average;
	x[0]=3;
	x[1]=2;
	x[2]=4;
	x={3,4,5}; //x[0]=3,x[1]=4........ iniliatiazation
	
	average=(x[0],x[1],x[2])/3;
	printf("%f is the average", average);
	
	return 0;
}
