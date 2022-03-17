#include "main.h"

/**
 * print_line - prints straight line n times
 * @n: times straight line is printed
 * Return: no return
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
