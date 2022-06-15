#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 *
 * @s: string whose length is to be calculated.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int length;

	length = sizeof(s) / sizeof(char);
	return (length);
}
