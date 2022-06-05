/*
 * program that prints all possible combinations of single-digit numbers.
 */

#include<stdio.h>

/**
 * main - execution begins here
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int i;
	
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}
	putchar('\n');

	return (0);
}
