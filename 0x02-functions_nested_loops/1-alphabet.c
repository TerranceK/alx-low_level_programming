#include<stdio.h>

/**
 * print_alphabet - print all letters of the alphabet in lowercase, followed
 * by a newline.
 *
 * @i: Counter from 97 to 122
 * Return: 0 on successful execution
 */
void print_alphabet(void)
{
	int i = 97;
	while (i <= 122)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
