#include <stdio.h>
/**
 * main - Entry point
 * A program that prints alphabet
 * in lowercase, followed by a new
 * line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}

