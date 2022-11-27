#include "main.h"
/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: accepts an integer value
 *
 * Return: nothing
 */
void print_triangle(int size)
{

	int i;
	int k;
	int j;
	int l;

	if (size > 0)
	{
		j = size;
		for (i = 1; i <= size; i++)
		{
			j -= 1;
			for (l = 0; l < j; l++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
