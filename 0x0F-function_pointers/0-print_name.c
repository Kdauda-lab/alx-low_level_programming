#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the string name to print
 * @f: a pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return;
}
