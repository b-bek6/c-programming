/*#include<stdio.h>
int main(void)
{
	int a,c,i;
	printf("Enter any number");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		c=i*1;
		printf("%d",c);
	}
	return 0;
}
/*incomplete */
/* Function declaration */
#include <stdio.h>

/* Function declaration */
unsigned long long fact(int num);


int main()
{
    int num;
    unsigned long long factorial;
    
    /* Input an integer from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    factorial = fact(num); // Call factorial function
    
    printf("Factorial of %d is %llu", num, factorial);
    
    return 0;
}


/**
 * Function to compute and return factorial of any number recursively. 
 */
unsigned long long fact(int num)
{
    // Base condition
    if(num == 0) 
        return 1;
    else
        return num * fact(num - 1);
}
