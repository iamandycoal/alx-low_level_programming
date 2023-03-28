#include "main.h"

/**
 * _strlen -This function  returns the length of a string
 * @s: char value to check
 *
 * Return: 0 - This will return the length of a string
 */

int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;

	return (n);
}
