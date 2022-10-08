#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: the string to duplicate 
 * Return: Null if insufficient memory is available 
 * Null if str = Null
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;
	str1 = (char *)malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
	{
		if (str1 == NULL)
			return(NULL);
		str1[i] = str[i];
	}
	str1[i] = '\0';
	return(str1);
}
