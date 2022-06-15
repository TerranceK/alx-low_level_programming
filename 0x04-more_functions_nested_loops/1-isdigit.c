#include "main.h"

/**
 * _isdigit - execution begins here
 *
 * @c: digit to be tested.
 * Return: 1 if c is a digot, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
