#include "main.h"

/**
 * _isupper - A function that checks for uppercase
 * character
 * @c: accepts an integer value
 * Return: 1 if true. On failure 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
