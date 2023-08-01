#inlcude "main.h"

/**
 * _strspn - function to compute length of substring
 * @s: pointer to the string
 * @accept: pointer to the substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, len, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}
	return (len);
}
