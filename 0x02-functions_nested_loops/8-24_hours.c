#include "main.h"

/**
 * jack_bauer - starting point
 *
 * Decription: A function that prints every minute of the day of jack bauer
 * starting from 00:00 to 23:59.
 *
 * Return: Always 0. (sucessful)
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		_putchar(a + '0');
	}
	for (b = 0; b <= 9; b++)
	{
		_putchar(b + '0');
	}
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
		_putchar(58);
	}
	for (c = 0; c <= 5; c++)
	{
		_putchar(c + '0');
	}
	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
	 _putchar ('\n');
}

