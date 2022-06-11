#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a line
 *
 * @n: the first number to be printed
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 ; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
