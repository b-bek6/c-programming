/* Pass by reference; changing the originals. */

#include<stdio.h>

void swap(int *a,int *b)
{
    int c;
    printf("\n inside(after): x = %d and y = %d ",a,b);
    c = *a;
    *a = *b;
    *b = c;
printf("\n inside(before): x = %d and y = %d ", *a, *b);
}

int main(void)
{
    int x = 9, y = 100;
    printf("After:")
    swap(&x,&y);
    printf("\n After: x = ")
}