#include"main.h"

/**
 * print_last_digit - print last digit.
 *
 * @n: inout number.
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int result = n % 10;
	_putchar(result);
	return (result);
}
