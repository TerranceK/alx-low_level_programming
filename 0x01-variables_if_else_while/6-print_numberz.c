/*
 *  program that prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line
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
	putchar('\n');

	return (0);
}
