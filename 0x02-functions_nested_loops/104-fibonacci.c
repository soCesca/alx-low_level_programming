#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c, boole1, boole2;
	long int num1, num2, fbn, fbn2, n11, n22;

	num1 = 1;
	num2 = 2;
	boole1 = boole2 = 1;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 96; c++)
	{
		if (boole1)
		{
			fbn = num1 + num2;
			printf(", %ld", fbn);
			num1 = num2;
			num2 = fbn;
		}
		else
		{
			if (boole2)
			{
				n11 = num1 % 1000000000;
				n22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boole2 = 0;
			}
			fbn2 = (n11 + n22);
			fbn = num1 + num2 + (fbn2 / 1000000000);
			printf(", %ld", fbn);
			printf(", %ld", fbn2 % 1000000000);
			num1 = num2;
			n11 = n22;
			num2 = fbn;
			n22 = (fbn2 % 1000000000);
		}
		if (((num1 + num2) < 0) && boole1 == 1)
			boole1 = 0;
	}
	printf("\n");
	return (0);
}
