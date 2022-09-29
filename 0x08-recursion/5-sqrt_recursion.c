#include "main.h"
int _sqrt2(int n, int i);
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: accepts an integer value
 *
 * Return: an integer value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt2(n, 0));
}

/**
 * _sqrt2 - a helper function to perform
 * the recursion and comparison
 * @n: the number to calculate it square
 * @i: the number to vary and compare with n
 *
 * Return: return an integer value
 */
int _sqrt2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt2(n, i + 1));

}
