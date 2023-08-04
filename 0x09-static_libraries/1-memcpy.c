#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destingation to copy the memory area to
 * @src: source memory area
 * @n: number of bytes
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
