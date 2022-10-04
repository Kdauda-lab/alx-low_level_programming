#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that adds positive numbers...
 * @argc: the arguement counter
 * @argv: An array for the arg pass to command line
 *
 * Return: Always returns 0 if success otherwise 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum, s;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '0')
		{
			continue;
		}
		else if (atoi(argv[i]))
		{
			s = atoi(argv[i]);
			if (s < 0)
			{
				continue;
			}
			sum = sum + s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
