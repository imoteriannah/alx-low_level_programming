#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 system
 * Return: 0
 */
int main(void)
{
	char b = '0';

	do {
		putchar(b);
		b++;
	} while (b <= '9');
	putchar('\n');
	return (0);
}
