#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1 : The first string
 * @s2 : The second string
 *
 * Return: an int value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
