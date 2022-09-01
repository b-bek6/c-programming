#include<stdio.h>
#include<string.h> 
int main(void)
{
char str1[10], str2[10]; 
printf("Enter the first string:"); 
scanf("%s", str1);
printf("Enter the second string:");
scanf("%s", str2); 
strcpy(str1, str2);
printf("First string : %s \t\t Second string: %s\n", str1, str2); 
strcpy(str1, "jomsom");
strcpy(str2, "kaagbeni");
printf("First string : %s \t\t Second string: %s\n", str1, str2); 
}
