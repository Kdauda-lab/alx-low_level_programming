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
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
		if (A > Z)
		{
			putchar('\n');
		}
	}
	return (0);
}

