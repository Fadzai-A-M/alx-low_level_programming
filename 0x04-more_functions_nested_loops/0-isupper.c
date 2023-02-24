#include " main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: value used
 *
 *  Return Always 0 (success)
 */
int _isupper(int c)

{
	c = 65;

	if (c <= 89)
	{
		return (1);

	}

	else
	{
		return (0);
	}
}
