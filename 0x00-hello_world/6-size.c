#include <stdio.h>
/**
 * main - program entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char:%zu byte\(s\)\n", sizeof(char));
	printf("Size of int:%zu byte\(s\)\n", sizeof(int));
	printf("Size of long:%zu byte\(s\)\n", sizeof(long));
	printf("Size of long long:%zu byte\(s\)\n", sizeof(long long));
	printf("Size of float:%zu byte\(s\)\n", sizeof(float));
	return (0);
}
