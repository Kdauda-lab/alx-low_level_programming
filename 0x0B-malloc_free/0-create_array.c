include "main.h"

/**
 * create_array - a function that creates an arra
 * of chars, and initializes it with a specific char.
 * @size: take an int value
 * @c: specific char to initialize
 *
 * Return: Null if size is 0 otherwise a
 * pointer to an array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)mallac(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
