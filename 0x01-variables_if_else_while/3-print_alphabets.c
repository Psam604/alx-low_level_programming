#include <stdio.h>

/**
 * main - program start execution
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}