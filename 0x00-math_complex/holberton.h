#ifndef _DOG_H
#define _DOG_H


/**
 * struct complex - type struct.
 * @re: double number
 * @im: double number
 *
 * Return: Always 0.
 */

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif