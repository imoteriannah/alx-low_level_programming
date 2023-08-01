#inlcude "main.h"

/**
 * _strspn - function to compute length of substring
 * @s: pointer to the string
 * @accept: pointer to the substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *p = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = p;
	}
	return (c);
}
