#include<stdio.h>

int main(void)
{
	
	int a=65535;					//intiger has the size of 2 bytes i.e. 16 bits that can hold value up to 2^16=65536
	unsigned long int b=(-4294967296/2 )+1;	//long intiger has the sizr of 4 bytes i.e. 32 bits that can hold value up to 2^23
	float c=3333.12;				//float double and long double is the is the real number data type 
	double d=333333.12;
	long double e=33333.33;
	// there are also signed and unsigned data type used for number having negative sign.
	
	printf(" the vaue of a is %d ,b is %ld, c is %f, d is %f and e is %f",a,b,c,d,e);
	return (0);
}
