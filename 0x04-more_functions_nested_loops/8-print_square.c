#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @n: accepts an integer value
 *
 * Return: nothing
 */
void print_square(int n)
{

	int i;
	int s = 0;

	if (n > 0)

	{
		while (s < n)
		{
			for (i = 0; i < n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			s++;
		}
	}
	else
	{
		_putchar('\n');

	}
}
