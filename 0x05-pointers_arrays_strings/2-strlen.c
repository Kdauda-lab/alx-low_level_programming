#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 * @s: a character parameter
 * Return: an integer value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}
