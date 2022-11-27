#include "main.h"
/**
 * _strncpy -  a function that copies a string
 * @dest: the string to copy to
 * @src: the string to copy to the dest
 * @n: the length of the string to copy
 *
 * Return: returns a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
