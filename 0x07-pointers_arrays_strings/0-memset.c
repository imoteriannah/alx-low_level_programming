#include "main.h"
/**
 * _memset - function to fill the first n bytes of a string
 * @s: pointer to the string to use its n bytes
 * @b: constant byte to fill the string
 * @n: number of bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
