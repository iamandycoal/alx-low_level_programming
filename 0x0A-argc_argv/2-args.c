#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 * @v: value
 *
 * Return: 0
 */

int main(int argc, char **argv)
{

	int v;

	for (v = 0; v < argc; ++v)
		printf("%s\n", argv[v]);
	return (0);
}
