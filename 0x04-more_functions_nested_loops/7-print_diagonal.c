#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: accepts an integer value
 *
 * Return: nothing
 */
void print_diagonal(int n)
{

	int i;
	int s = 1;

	if (n > 0)

	{
		_putchar('\\');
		_putchar('\n');
		n = n - 1;
		while (s <= n)
		{
			for (i = 0; i < s; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			s++;
		}
	}
	else
	{
		_putchar('\n');

	}
}
