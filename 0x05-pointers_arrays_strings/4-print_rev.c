#include "main.h"
#include <stdio.h>
/**
 * print_rev- A function that prints a string,
 * followed by a new line, to stdout
 * @str: accepts a character parameter
 */
void print_rev(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
	{
		i++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
