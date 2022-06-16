#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 * @str: string to be printed.
 */

void _puts(char *str)
{
	int i, max;

	max = sizeof(*str) / sizeof(char);
	for (i = 0; i < max; i++)
	{
		_putchar(str[i] + '0');
	}
	_putchar('\n');
}
