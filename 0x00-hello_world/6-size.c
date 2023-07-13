#include <stdio.h>
/**
 * main - program entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("%lu Size of char:\n", sizeof(char));
	printf("%lu Size of int:\n", sizeof(int));
	printf("%lu Size of long:\n", sizeof(long));
	printf("%lu Size of long long:\n", sizeof(long long));
	printf("%lu Size of float:\n", sizeof(float));
	return (0);
}
