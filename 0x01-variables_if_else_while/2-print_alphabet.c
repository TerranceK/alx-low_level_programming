/*
 * Write a program that prints the alphabet in lowercase,
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
	int i;
	
	for (i = 97 ; i <= 122 ; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
