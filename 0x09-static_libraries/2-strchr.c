#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: string to search in
 * @c: character to locate
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
