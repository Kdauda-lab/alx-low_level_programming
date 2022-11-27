#include <stdio.h>

/**
 * main- A program to print the name of the program
 * @argc: the arguement counter
 * @argv: An array for the arg pass to command line
 *
 * Return: Always returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
