#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int alph, count;

	count = 0;
	while (count < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		count++;
		_putchar('\n');
	}
}
