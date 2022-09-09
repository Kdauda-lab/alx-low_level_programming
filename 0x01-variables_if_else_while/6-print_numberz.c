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
	char ch = '0';
	int cnt;
	int base = 10;

	for (cnt = 0; cnt < base; cnt++)
	{
		putchar (cnt + ch);

	}
	putchar ('\n');
	return (0);
}

