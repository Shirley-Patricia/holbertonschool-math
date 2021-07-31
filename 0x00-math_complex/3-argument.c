#include "holberton.h"
#include <math.h>


/**
* argument - argument of a complex number .
* @c: name struct complex
*
* Return: argument.
*/

double argument(complex c)
{
	double a;
	if (c.re != 0)
	{
		a = atan2(c.im, c.re);
	}
	return (a);
}
