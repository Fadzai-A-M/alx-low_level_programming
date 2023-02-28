#include "main.h"

/**
 * _strcpy - function that copies the string
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];

			i++;
		}

	dest[i] = '\0';

	return (dest);

}
