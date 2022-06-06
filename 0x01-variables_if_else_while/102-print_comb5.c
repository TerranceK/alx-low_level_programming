/*
 * program that prints all possible combinations of two two-digit numbers.
 */
#include <stdio.h>

/**
 * main - execution begins here
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
