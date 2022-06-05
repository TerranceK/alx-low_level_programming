/*
 * program that prints the lowercase alphabet in reverse,
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
	for (int i = 122; i <= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
