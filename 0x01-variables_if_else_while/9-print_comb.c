#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 49;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(44);
			putchar("");
		}
		num++;
	}
	putchar('\n');

	return (0);
}
