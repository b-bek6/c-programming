#include<stdio.h>
int main()
{
float a,i;
printf("enter any rational number: ");
scanf("%f",&a);
for (i=1;i<=10;i++)
{
printf("%f*%f=%f\n",a,i,a*i);
}
return(0);
}
