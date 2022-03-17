#include <stdio.h>

/**
 * main - prints the add of even-valued fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1, num2, fbn, afn;

	num1 = 1;
	num2 = 2;
	fbn = afn = 0;
	while (fbn <= 4000000)
	{
		fbn = num1 + num2;
		num1 = num2;
		num2 = fbn;
		if ((num1 % 2) == 0)
		{
			afn += num1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
