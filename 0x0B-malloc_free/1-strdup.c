#include <stdlib.h>

/**
 * _strdup - function to print newly allocated space pointer
 * @str: pointer to a string
 * Return: pointer to the memory
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, n;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= i; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
