#include "main.h"

/**
 * _isupper - tests if parameter is uppercase.
 *
 * @c: parameter to be tested.
 * Return: 1 if parameter is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
