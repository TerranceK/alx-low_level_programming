#include"main.h"

/**
 * print_last_digit - print last digit.
 *
 * @n: input number.
 * Return: last digit.
 */

int print_last_digit(long int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
