#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string array
 * @src: source string array
 * Return: a pointer to an array
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	if (src[j] == '\0')
	{
		dest[i + j] = '\0';
	}

	return (dest);
}
