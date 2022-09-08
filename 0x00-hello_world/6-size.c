#include <stdio.h>

/**
 * main - Entry point
 * Program to print all datatype sizes in mermory of the compute the program run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of a int:  %ld bytes(s)\n", sizeof(int)); 
	printf("Size of a long int:  %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int:  %ld bytes(s)\n", sizeof(double));
	printf("Size of a float:  %ld bytes(s)\n", sizeof(float));

	return (0);
}
