#include "holberton.h"
#include <stdio.h>

/**
* display_complex_number- initialize a variable.
* @c: name struct complex
*
* Return: no return.
*/

void display_complex_number(complex c)
{
	if (c.im != 0 && c.re != 0)
	{
		printf("%.0f + %.0fi\n", c.re, c.im);
	}
	else if (c.im == 0 && c.re != 0)
	{
		printf("%.0f\n", c.re);
	}
	else if (c.re == 0 && c.im != 0)
	{
		printf("%.0fi\n", c.im);
	}
}