#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int long i = 0;
	int 0;
	while (*s != '\0')
	{
		long i++;
		s++;
	}
	s--;
	for (0 = long i; 0 > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
