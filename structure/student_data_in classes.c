/* Record names, roll no, and weight of some students using structures. */

#include<stdio.h>

#define SIZE 1

struct student {                       //int ... float .   // struct student
	char name[100];
	int roll_no;
	float weight;
};

typedef int integer;

typedef struct student pupil;

int main(void)
{
	struct student students[SIZE];                // int x[SIZE], float y[SIZE], 
	integer i;	// int = integer
	float average_weight;

        for (i = 0; i<SIZE; i++)
	{
		printf("Please enter name, roll_no, and weight of %d position student:\n", i+1);
		scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].weight);
	}
	
        average_weight = 0;
	for (i = 0; i<SIZE; i++)
	{
		average_weight = average_weight + students[i].weight/SIZE;                  //(1+2+3)/5 == 1/5+2/5+3/5
		printf("Information of %d position student:\n", i+1);
		printf("Name: %s\t Roll: %d\t Weight: %f\n", students[i].name, students[i].roll_no, students[i].weight);
		
		printf("\n\n***%f*** is the average weight of the students.\n", average_weight); 
	}

	printf("%f is the average weight of the students.\n", average_weight); 

	return 0;
}