#include <stdio.h>

/**
 * main - Program entry point
 * @argc: number of arguments passed to the program
 * @argv: array of the arguments passed
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
