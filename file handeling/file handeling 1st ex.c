/* File handling 1st example. */

#include<stdio.h>

int main(void)
{
    FILE *input_file;
    int i = 1, sum = 0;

    input_file = fopen("Filetest.txt", "w");

    printf("This is a screen display.\n");

    for(i=1; i<=100; i++)
    {
    fprint(input_file,"%d\n",i+3);
    }


    fclose(input_file);
}

pointer define garni suru ma one or more pointer defing garni
file open garni wright modegarni 
fpriintf prints but inside file lekxa

Write a program to sort 100 random numbers using bubble sort. homework