#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that multiplies two numbers..
 * @argc: the arguement counter
 * @argv: An array for the arg pass to command line
 *
 * Return: Always returns 0 if success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
