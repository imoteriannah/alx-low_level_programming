#include "main.h"

/**
* _strstr - function locate a substring
* @haystack: pointer to string for use
* @needle: pointer to substring to locate
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *hays = haystack, *need = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (hays);
		}
		needle = need;
		hays++;
		haystack = hays;
	}
	return (0);
}
