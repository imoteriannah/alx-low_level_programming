#include "main.h"

/**
 * *_strcpy -  copies the string in the pointer src to dest
 * @dest: char type string
 * @src: char type string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
