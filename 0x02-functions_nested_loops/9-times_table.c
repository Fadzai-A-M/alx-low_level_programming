#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */

void times_table(void)

{
	int a;
	int result;

	for (a = 1; a <= 10; a++)

	{
		result = 9 * a;

		_putchar(result + '0');

	}


}
