/* A pointer is a variable that points to any location or address in the memory; the pointer is of certain data type and the location tn the memory to which the pointer points to must contain the same type of data or must be of the same data type.

pointers are declated as
            <datatype> *<variable>L it is read as <variable> is a pointer variable that points to the <datatype

            for ex.
              int *x; is read as x is a pointer variable, and it points to an integer, or simply, x is a pointer variable that points to an int.

              one must care that a pointer variable actually takes the value of the location tn the memory and not the value in that location. The value inside is actually accessed by *x, x is only location in the memory.

 */

#include<stdio.h>

int main(void)
{
    int *x, i;      // x is a pointer variable that can take in any integer location
    float *y, m = 9.99;       // y is a pointer variable that takes address of a float valued location
    
    y = &m;

    i = 7;

    x = & i;

    printf("%p\t %p\t",x, &i);

    printf("%f\n",*y);      // 9.99

    printf("%d\n",y)

    return 0;
}

