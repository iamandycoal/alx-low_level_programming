#include "main.h"

/**
 * puts2 - function prints every other character of a string
 * @str: char to check
 *
 * Return: 0.
 */

void puts2(char *str)
{
	int strName;

	for (strName = 0; str[strName] != '\0'; strName++)
	if (strName % 2 == 0)
		_putchar(str[strName]);
	_putchar('\n');
}
