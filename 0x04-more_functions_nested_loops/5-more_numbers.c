#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * tentimes
 * Return: no return
 */
void more_numbers(void)
{
	int d, num;

	for (d = 0; d < 10; d++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
