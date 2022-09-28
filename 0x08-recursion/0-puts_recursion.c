#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: an array of character (string)
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;

	}
	_putchar('\n');
}
