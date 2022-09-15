#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: accepts an integer value
 *
 * Return: nothing
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
