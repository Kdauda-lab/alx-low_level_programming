#include "main.h"
#include <ctype.h>
/**
 * _islower - check if a value is lower
 * if true, return 1 otherwise 0.
 * @c: take an integer arguement
 *
 * Return: nothing
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (_putchar('1'));
	}
	else
	{
		return (_putchar('0'));
	}

}

