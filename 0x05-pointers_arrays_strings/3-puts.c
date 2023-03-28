#include "main.h"

/**
 * _puts - function prints a string
 * @str: string func
 *
 * Return: 0 - length of string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
