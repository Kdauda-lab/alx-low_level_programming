#include "main.h"
/**
 * rev_string- A function that reverses a string,
 * @s: accepts a character parameter
 */
void rev_string(char *s)
{
	int i;
	int tmp;
	int size = 0;
	int siz = 0;

	while (s[siz] != '\0')
	{
		siz++;
	}
	size = siz - 1;
	for (i = 0; i < siz / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size];
		s[size--] = tmp;
	}
}
