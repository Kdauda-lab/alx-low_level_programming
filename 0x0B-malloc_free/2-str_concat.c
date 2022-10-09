#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat- a function that concatenates two strings.
 * @s1: The first string to concate
 * @s2: The second string to concate
 * Return: A pointer to newstr otherwise NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j;
	int len, len1, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len1++;

	total_len = len + len1;
	newstr = (char *)malloc((total_len + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < total_len; i++)
	{
		if (s1[i] == '\0')
			break;
		newstr[i] = s1[i];
	}
	j = 0;
	for (; i < total_len; i++)
	{
		if (s2[j] == '\0')
			break;
		newstr[i] = s2[j];
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
