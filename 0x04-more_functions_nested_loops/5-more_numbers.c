#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * from 0 to 14, followed by a new line
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	char num[] = "1011121314";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
		}
		for (k = 0; k < 10; k++)
		{
			_putchar(num[k]);
		}
	_putchar('\n');
	}
}
