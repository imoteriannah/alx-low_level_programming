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
	char b = 'A';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');

	do {
		putchar(b);
		b++;
	} while (b <= 'Z');
	putchar('\n');
	return (0);
}
