#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 *
 * @y: value to be used
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int y)

{
	int z = y % 10;

	if (z < 0)

	{
		z = z * -1;

	}

	_putchar(z + '0');

	return (z + '0');

}

