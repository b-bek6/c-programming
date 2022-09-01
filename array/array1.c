/* An array is a collection of homogeneous variables. Homogeneous means the variables are of same type. For eg. if one of the variables are of Integral type, then all the array members should/will contain Integers. 
 * An array is identified or declared by a common name, the array variable has common names for its members.
 * */
/* redundancy -- repetition, reduction */



#include<stdio.h>

int main(void)
{
	int x[10] = {0}, i, sum = 0;  //declaration, initialization
	
	float average;

	for(i = 0; i<10; i++)
	{
		x[i] = i+1;
		sum += (i+1);   // 0, 1+0, 1+2, 3+3, 6+4, 10+5, 15+6, 21+7, 28+8, 36+9, 45+10
		printf("%d\t %d\n", x[i], sum);
	}
	
	average = (float)sum/10.0;

	printf("%f \n", average);
	return 0;
}


	





