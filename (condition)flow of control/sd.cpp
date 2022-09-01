#include<stdio.h>

int main(void)
{
    int A[10],i,j,x;

    for(i=1;i<=10;i++);
    {
    printf("Enter any 10 number: ");
    scanf("%d",&A[i]);
    }

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(A[i]>A[j])
            {
                x=A[i];
                A[i]=A[j];
                A[j]=x;

            }
        printf("%d",A[i]);
        }

    }
}
