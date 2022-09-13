#include "main.h"
/**
 * PrintChar - print a string to std
 * 
 * Return - on success 0
 */
int printChar(void)
{
	char a[] = "_putchar";
	int i;


	for (i = 0; i < 10; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}

int main(void)
{
	printChar();
	return (0);
}
