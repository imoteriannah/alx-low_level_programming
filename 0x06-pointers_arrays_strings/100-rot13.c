#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer for the string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, p;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; p < 54; ii++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == input[p])
			{
				s[i] = output[p];
				break;
			}
		}
	}
	return (s);
}
