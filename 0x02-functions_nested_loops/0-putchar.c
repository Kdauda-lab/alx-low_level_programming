#include"main.h"
/**
 * printChar - prints _putchar to std
 * @void: does not take any arguements
 *
 * Return:  on success 0
 * On error, -1 is returned, and errno is set appropriately
 */
int printChar(void)
{
	char a[] = "_putchar\n";
	int i;


	for (i = 0; i < 10; i++)
	{
		_putchar(a[i]);
	}
	return (0);
}

