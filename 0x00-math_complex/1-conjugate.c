#include "holberton.h"
#include <stdio.h>

/**
* conjugate - initialize a variable.
* @c: name struct complex
*
* Return: no return.
*/

complex conjugate(complex c)
{
	complex comp;

	comp.re = c.re;
	comp.im = (c.im * -1);	
	return (comp);
}

