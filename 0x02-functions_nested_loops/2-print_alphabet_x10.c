#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: Always void (success)
 */
void print_alphabet_x10(void)

{
	int i;

	int count;

	count = 0;

	while (count < 10)

	{
		i = 97;

		while (i <= 122)

		{
			_putchar(i);

			i++;
		}

		count++;
	}

	_putchar('\n');
}