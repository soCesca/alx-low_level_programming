#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int num1, num2, fbn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 48; c++)
	{
		fbn = num1 + num2;
		printf(", %ld", fbn);
		num1 = num2;
		num2 = fbn;
	}
	printf("\n");
	return (0);
}
