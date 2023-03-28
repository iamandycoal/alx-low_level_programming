#include "main.h"
#include <stdio>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int passwd;
	char p;

	srand(time(0));
	while (sum <= 2775)
	{
		p = rand() % 100;
		sum = passwd + p;
		putchar(p);
	}
	putchar(2775 - sum);
	return (0);
}
