#include "main.h"

/**
 * _isalpha - checks for alphabetic character. Shows 1 if input is a letter, otherwise shows 0.
 *
 * @c: single letter input
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
