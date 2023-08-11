#include "main.h"

/**
 * _memcpy - function to copy char
 * @s: string to be copied to
 * @b: input char to be copied
 * @n: number of bytes of char
 * Return: string
 */
char *_memcpy(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements of array
 * @size: number of bytes of array
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memcpy(p, 0, (nmemb * size));
	return (p);
}
