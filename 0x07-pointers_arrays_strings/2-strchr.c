#include "main.h"

/**
 *  _strchr -  locates a character in a string.
 * @s: destination
 * @c: source
 * Return: null if charcter is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
