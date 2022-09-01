/* This program does arthematic operation on complex number of the form (a + ib) */

#include<stdio.h>

typedef struct complex_no {
    int real_part;
    int complex_part;
} complex_no;

int sum(complex_no imag1, complex_no imag2)
{
    complex_no temp;
    temp.real_part = imag1.real_part + imag2.real_part;
    temp.complex_part = imag1.complex_part + imag2.complex_part;
    return temp;

}
int difference(complex_no imag1, complex_no imag2)
{
    complex_no temp;
    temp.real_part = imag1.real_part - imag2.real_part;
    temp.complex_part = imag1.complex_part - imag2.complex_part;
    return temp;

}int product(complex_no imag1, complex_no imag2)
{
    complex_no temp;
    temp.real_part = imag1.real_part * imag2.real_part;
    temp.complex_part = imag1.complex_part * imag2.complex_part;
    return temp;

}