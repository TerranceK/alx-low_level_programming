/*
 * program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 */

#include<stdio.h>

/**
 * main - execution begins here
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (int i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
