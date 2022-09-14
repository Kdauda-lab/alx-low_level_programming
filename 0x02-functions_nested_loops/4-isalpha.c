#include "main.h"
/**
 * _isalpha - check for alphabet
 * if true, return 1 otherwise 0.
 * @c: take an integer arguement
 *
 * Return: 1 otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
