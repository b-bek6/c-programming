/* Using string.h and use functions defined there to our program. Strings are combination of characters. They are arrays of char */

#include<stdio.h>    // standard library header files
#include<string.h>
#include<math.h>

#define SIZE 100

int main(void)
{
	
	char string1[SIZE] = "Abcde", string2[SIZE]= "Acdef";    // strings are in "", and contain '\n' character additionally at the end.

	int x;
        float y = 25;

/*	x= strlen(string2);
	printf("String length: The length of string %s is: %d\n", string2, x);
	
        strcat(string1, string2);
		
	printf("Concatenation: String 1: %s\n String 2: %s\n", string1, string2);
	
//	strcpy(string1, string2);

	printf("CopyReplace: String 1: %s\n String 2: %s\n", string1, string2);

	x = strcmp(string2, string1); // returns 0 if two strings are equal otherwise not.
	
*/

	sqrt(y);
	sin(y);

	printf("%f", sqrt(y));
	
/*	if (x<0)
	{
		printf("%s comes before %s\n", string2, string1);
	}

	else
	{
		printf("%s comes before %s\n", string1, string2);
	}
	
	printf("String Comparision: %d\n", x);
*/	
	return 0;
}



