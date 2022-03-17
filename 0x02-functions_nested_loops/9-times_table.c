#include "main.h"

/**
 * times_table - prints the 9 times table
 * r = row, c = column, mult = digit of currebt result
 * Result: no return
 */
void times_table(void)
{
	int r, c, mult;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			mult = (r * c);
			if ((mult / 10) > 0)
			{
				_putchar((mult / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((mult % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
