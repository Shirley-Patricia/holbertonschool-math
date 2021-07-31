#include "holberton.h"
#include <math.h>

/**
* modulus - modulus of a complex number .
* @c: name struct complex
*
* Return: no return.
*/

double modulus(complex c)
{
	double x;
	double y;
	double z;

	y = 2;
	x = (pow(c.re, y) + pow(c.im, y));
	z = sqrt(x);
	return (z);
}
