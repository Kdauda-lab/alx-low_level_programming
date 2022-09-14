#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: accepts an integer value
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	int b = n % 10;

	if (b < 0)
	{
		b = -b;
	_putchar('0' + b);
	return (b);
}
