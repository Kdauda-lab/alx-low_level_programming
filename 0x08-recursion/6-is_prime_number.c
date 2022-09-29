#include "main.h"
int is_prime_main(int n, int i);
/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: accepts an integer value
 *
 * Return: an integer value
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_main(n, n - 1));
}

/**
 * is_prime_main - a helper function to perform
 * the calculation
 * @n: the number to calculate it square
 * @i: the number to vary and compare with n
 *
 * Return: return an integer value
 */
int is_prime_main(int n, int i)
{
	if ( i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (is_prime_main(n, i - 1));

}
