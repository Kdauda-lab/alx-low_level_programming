#include <stdio.h>

/**
 * main - Entry point
 * Program to print all datatype size
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of a int:  %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int:  %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int:  %lu bytes(s)\n", sizeof(long int));
	printf("Size of a float:  %lu bytes(s)\n", sizeof(float));

	return (0);
}