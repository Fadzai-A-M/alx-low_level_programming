#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: pointer to an string
 * Return: int
 */

int _strlen(char *s)

{
	int length = 0;

		while (s[length] != '\0')

		{
			length++;
		}

		return (length);
}
