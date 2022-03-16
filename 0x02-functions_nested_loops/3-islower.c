#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * Return 1 if int is lowercase, else return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
