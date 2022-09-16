#include <stdio.h>
/**
 * main - a function that prints a square, followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{

	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" %s%s", f, b);
		}
		else if (i % 3 == 0)
		{
			printf(" %s", f);
		}
		else if (i % 5 == 0)
		{
			printf(" %s", b);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}

