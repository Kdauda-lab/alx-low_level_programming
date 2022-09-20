#include "main.h"
/**
 * _puts - A function that prints a string,
 * followed by a new line, to stdout
 * @str: a character parameter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(st[i]);
		i++;
	}
	if (str[i] == '\0')
	{
		_putchar('\n');
	}
}
