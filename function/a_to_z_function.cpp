/* This function just prints from 'a' to 'z' */

#include<stdio.h>

a_to_z()					//int a_to_z(void)
{
	int i;
	char first = 'a';
	
	for (i=0;i<26; i++)
	{
		printf("%c  ", first);
		first +=1;
	}
}

int main(void)
{
	a_to_z();
	printf("\n");
	return 0;
}
