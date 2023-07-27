#include "main.h"

/**
 * *cap_string - capitalize all words in a string
 * @str: pointer to the string
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
	char check[] = ",\t;\n; .!?\"(){}";
	int flag, i, p;

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;

		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			for (p = 0; check[p] != '\0'; p++)
			{
				if (str[i - 1] == check[p])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
