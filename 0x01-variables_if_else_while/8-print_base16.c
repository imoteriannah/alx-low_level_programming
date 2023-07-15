#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program Entry point
 * Description: prints all single digit numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
