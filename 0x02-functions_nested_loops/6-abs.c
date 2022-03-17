#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @ab: input number
 *
 * Return: absolute value
 */
int _abs(int ab)
{
	if (ab >= 0)
	{
		return (ab);
	}
	else
	{
		return (ab * -1);
	}
}
