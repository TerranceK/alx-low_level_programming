#include "main.h"

/**
 * print_digits - function that prints digits using _putchar.
 *
 * @n: input to be printed.
 */
void print_digits(int n)
{
	if ((n >= 0) && (n < 10))
	{
		_putchar(n + '0');
	}
	else if ((n >= 10) && (n < 100))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 100) && (n < 1000))
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
 * print_spaces - print ',' and a specified number of spaces using _putchar().
 *
 * @n: input - spaces to be printed.
 */
void print_spaces(int n)
{
	int i;

	_putchar(',');
	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 * @n: input whose times table has to be printed.
 */
void print_times_table(int n)
{
	int i, j, ans;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ans = i * j;
				if (ans < 10)
				{
					print_digits(ans);
					if (j < n)
						print_spaces(3);
				}
				else if ((ans >= 10) && (ans < 100))
				{
					print_digits(ans);
					if (j < n)
						print_spaces(2);
				}
				else if ((ans >= 100) && (ans < 1000))
				{
					print_digits(ans);
					if (j < n)
						print_spaces(1);
				}
			}
			_putchar('\n');
		}
	}
}
