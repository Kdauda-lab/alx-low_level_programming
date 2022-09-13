#include "main.h"
/**
 * print_alphabet - print all lower alphabet.
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char i;
	char b = 'z';
	int num = 0;

	while (num <= 9)
	{
		for (i = 'a'; i <= b; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		num++;
	}
}

