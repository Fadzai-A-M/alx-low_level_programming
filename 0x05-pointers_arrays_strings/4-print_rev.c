#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @k: String to print
 * Return: nothing.
 */

void print_rev(char *k)
{

	int length = 0;
	int i;

	while (k[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)

	{
		_putchar(k[length]);

	}
	_putchar('\n');
}
