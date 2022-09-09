#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 * A program to print the
 * last digit of number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_num = n % 10;

	if (lst_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_num);
	}
	else if (lst_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_num);
	}
	else if (lst_num < 6 && lst_num != 0)
	{
		printf("Last_digit of %d is %d and is less than 6 and not 0\n", n, lst_num);
	}
	return (0);
}

