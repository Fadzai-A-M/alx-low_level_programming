#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: the character to check
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)

	{
		return (1);

	}

	if (c >= 65 && c <= 90)

	{
		return (1);

	}

	else

	{
		return (0);

	}

}
