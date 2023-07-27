#include "main.h"

/**
 * leet - encode a string to leet
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, p;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (p = 0; p < 5; p++)
		{
			if (s[i] == s1[p] || s[i] == S1[p])
			{
				s[i] = s2[p];
				break;
			}
		}
	}
	return (s);
}
