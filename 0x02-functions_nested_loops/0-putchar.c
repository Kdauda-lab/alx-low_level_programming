#include "main.h"
/**
 * PrintChar - print a string to std
 * 
 * Return - on success 0
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

int main(void)
{
	printChar();
	return (0);
}
