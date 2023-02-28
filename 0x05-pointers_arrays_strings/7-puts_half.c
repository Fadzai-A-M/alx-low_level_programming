#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 5;

	while (str[i] != '\0')
	{
		_putchar[str[i]];

		i++;

	}

	_putchar('\n');

}
