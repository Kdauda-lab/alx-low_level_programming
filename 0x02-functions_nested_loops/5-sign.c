#include "main.h"
/**
 * print_sign - test a number and return
 * 1 and '+' if n is greater than zero,
 * '0' and print '0' if n is zero
 * '-1' and print '-' if n is less than zero
 * @n: take an integer arguement
 *
 * Return : Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return ('+');
	}
	else if (n  == 0)
	{
		return (0);
	}
	else
	{
		return ('-');
	}
}

