#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c - single letter input
 *
 * Return 1 if int c is lowercase, else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
