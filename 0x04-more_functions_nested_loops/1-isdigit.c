#include "main.h"

/**
 * _isdigit - A function that checks for a digit
 * @c: accepts an integer value
 * Return: 1 if true. otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
