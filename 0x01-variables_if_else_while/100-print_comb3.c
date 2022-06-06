/*
 * program that prints all possible different combinations of two digits.
 */
#include<stdio.h>

/**
 * main - execution begins here
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int small, large;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j)
			{
				small = (i * 10) + j;
				large = (j * 10) + i;
				if (small < large)
				{
					putchar(i + '0');
					putchar(j + '0');
					if (small < 89)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
