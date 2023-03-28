#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: char to check
 *
 * _putchar - function is use to print the char
 * Return: 0.
 */

void rev_string(char *s)
{
	int x = 0, y, z;
	char w;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		w = s[y];
		s[y] = s[z];
		s[z] = w;
	}
}
