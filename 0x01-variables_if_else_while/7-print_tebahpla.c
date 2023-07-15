#include <stdio.h>
#include <stdlib.h>
/**
 * main - main program entry block
 * Description: program to print the letters of the alphabet
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}

