#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 system
 * separated by combos
 * Return: 0
 */
int main(void)
{
	int  b = 0;

	do {
		putchar(48 + b);
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	} while (b <= 9);
	putchar('\n');
	return (0);
}
