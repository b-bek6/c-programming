#include<stdio.h>

int main(void)
{
    FILE *input_file;

    input_file = fopen("filetest.txt","r");       //fopen takes in file name,and mode of opening
                                                //There are three modes of opening a file
                                                //"r", read only
                                                //"w", Write byt overwrites
                                                //"a", attends something to the end

    printf("This is a file test.\n");            //printf will print something to the screen
    fprintf(input_file,"This is a file test.\n");   //

    fclose(input_file);

    return 0;
}