#include "main.h"
/**
 * print_alphabet - print all lower alphabet.
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char i;
	char b = 'z';

	for (i = 'a'; i <= b; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

