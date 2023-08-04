#include "main.h"

/**
 * _isupper - checks if the character is Uppercase
 * @c:  argument to check case on
 * Return: 1 if uppercase 0 therwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
