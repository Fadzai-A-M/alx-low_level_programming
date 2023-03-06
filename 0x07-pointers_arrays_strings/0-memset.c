#include "main.h"

/**
 * a_memset - fills memory with a constant byte.
 * @s: pointer to the block of memory to be set.
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)

{
	char *p = s;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;

	}

	return (s);

}
