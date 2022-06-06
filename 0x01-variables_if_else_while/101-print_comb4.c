/*
 * program that prints all possible different combinations of three digits.
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
	int k = 0;
	int first, second, third, fourth, fifth, sixth;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j)
				{
					first = (i * 100) + (j * 10) + k;
					second = (i * 100) + (k * 10) + j;
					third = (j * 100) + (i * 10) + k;
					fourth = (j * 100) + (k * 10) + i;
					fifth = (k * 100) + (i * 10) + j;
					sixth = (k * 100) + (j * 10) + i;
					if (first < second &&
						first < third &&
						first < fourth &&
						first < fifth &&
						first < sixth)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
						if (first < 789)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
