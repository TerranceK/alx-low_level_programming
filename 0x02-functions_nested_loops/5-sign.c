#include"main.h"

/**
 * print_sign - Prints the sign of a given number.
 *
 * @n: Input value to be tested.
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n <0.
 */

int print_sign(int n)
{
	int nsign;

	if (n > 0)
	{
		nsign = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		nsign = -1;
		_putchar('-');
	}
	else
	{
		nsign = 0;
		_putchar('0');
	}

	return (nsign);
}

