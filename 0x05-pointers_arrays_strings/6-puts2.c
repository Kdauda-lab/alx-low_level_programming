#include "main.h"

/**
 * puts2 - a function that prints
 * every other character of a string;
 * starting with the first character, followed by a new line.
 * @str: accepts a pointer to a string
 */
void puts2(char *str)
{
	int i = 0;
	int str_len;

	while (str[i] != '\0')
	{
		i++;
	}
	str_len = i;
	_putchar(str[0]);
	for (i = 2; i < str_len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
