#include <stdio.h>
/**
 * main - Entry point
 * A program that prints all
 * single digit numbers of base 10
 * starting from 0 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 10;
	int b;

	for (b = 0; b < a; b++)
	{
		printf("%d", b);
		if (b == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}

