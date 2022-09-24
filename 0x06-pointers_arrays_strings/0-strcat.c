#include "main'h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string array
 * @src: source string array
 * Return: a pointer to an array
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
