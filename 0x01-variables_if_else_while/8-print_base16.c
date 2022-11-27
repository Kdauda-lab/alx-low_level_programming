#include <stdio.h>
/**
 * main - Entry point
 * A program that prints all
 * numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char a = 'a';
	char g = 'g';

	while (n < 10)
	{
		putchar(n + '0');
		n++;

	}
	while (a < g)
	{
		putchar(a);
		a++;

	}
	putchar ('\n');
	return (0);
}

