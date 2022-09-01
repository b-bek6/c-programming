#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,j;
	printf("Number of Table of: ");
	scanf("%d",&a);
	for (j=1; j<=a; j++)
	{
	for (i=1; i<=10;  i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
			}
	
	}
	getch();
}
