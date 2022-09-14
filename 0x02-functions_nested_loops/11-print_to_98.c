#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prins all natural numbers from n to 98
 * followed by a new line
 * @n: Accepts a int which is used as start point
 */
void print_to_98(int n)
{
	int a = 0, b;

	if (n <= 98)
	{
		while (a <= 98)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
			a++;
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else if (b == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}
