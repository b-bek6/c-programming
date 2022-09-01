#include<stdio.h> 
#include<stdlib.h> 
 
int main(void) {
	char name[64]; 
	printf("Enter the name of the file to be created: "); 
	fgets(name, 64, stdin); 
	FILE *fp = fopen(name, "w"); 
	if(fp == NULL) { 
		printf("Could not create file. Maybe locked or being used by another application?\n"); 
		exit(-1); 
	} 
	fclose(fp); 
	return 0; 
}  
