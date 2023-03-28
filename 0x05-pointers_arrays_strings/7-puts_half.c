#include "main.h"

/**
 * puts_half - function prints half of a string
 * @str: char to check
 *
 * Return: 0.
 */

void puts_half(char *str)
{
	int strName = 0, n;

	while (str[strName] != '\0')
		strName++;
	if (strName + 1 % 2 != '0')
		n = (strName - 1) / 2;
	else
		n = (strName / 2);
	n++;

	for (strName = n; str[strName] != '\0'; strName++)
	_putchar(str[strName]);
	_putchar('\n');
}
