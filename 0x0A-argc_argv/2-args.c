#include <stdio.h>

/**
 * main- a program that prints all arguments it receives.
 * @argc: the arguement counter
 * @argv: An array for the arg pass to command line
 *
 * Return: Always returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
