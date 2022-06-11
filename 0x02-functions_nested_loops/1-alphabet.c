#include"main.h"

/**
 * print_alphabet - print all letters of the alphabet in lowercase, followed
 * by a newline.
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
