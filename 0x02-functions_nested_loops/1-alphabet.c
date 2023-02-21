#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line using putchar
 *
 * Return (void)
 */

void print_alphabet(void)

{
	int i;

	i = 97;

	while (i <= 122)

	{
		_putchar(i);

			i++;
	}

	_putchar('\n');



}
