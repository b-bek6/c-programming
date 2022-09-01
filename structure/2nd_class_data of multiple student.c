/* Record names, roll no and weight of some students using structures. */

#include<stdio.h>

#define SIZE 1

struct student{                                            // int.... float.  struct student
    char name[100];
    int roll_no;
    float weight;

};

typedef int number;
int main(void)
{
    struct student students[SIZE];            // int x, float y
    number i;                                              // int = integer
    for (i = 1;i<=SIZE;i++)
    {
        printf("Please enter name, roll_no and weight of %d position student: \n",i);
        scanf("%s %d %f", &students[i].name, &students[i].roll_no, &students[i].weight);
    }
    for (i = 1;i<=SIZE;i++)
    {
        printf("Name of %d student is: %s \n Roll no is: %d \n Weight is : %f\n" ,i,students[i].name, students[i].roll_no, students[i].weight);
    }
    return 0;
}