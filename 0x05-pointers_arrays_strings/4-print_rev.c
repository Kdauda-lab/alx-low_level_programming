#include "main.h"
/**
 * print_rev- A function that prints a string,
 * followed by a new line, to stdout
 * @str: accepts a character parameter
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
