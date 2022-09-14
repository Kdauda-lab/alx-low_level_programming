#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: accepts an integer value
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
