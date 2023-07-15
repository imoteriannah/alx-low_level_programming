#include <stdio.h>
#include <stdlib.h>
/**
 * main - main program entry block
 * Description: program to print the letters of the alphabet
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	do {
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	} while (c <= 'z');
	putchar('\n');
	return (0);
}

