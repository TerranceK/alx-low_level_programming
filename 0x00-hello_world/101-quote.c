/*
 * C program that prints exactly
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * Without printf, puts or related functions.
 */

#include<stdio.h>
#include<string.h>

/**
 * main - execution begins here
 *
 * Return: 1 to indicate error (printing to stderr)
 */
int main(void)
{
	char myString[] = "and that piece of art is useful\"\
		- Dora Korpar, 2015-10-19\n";

	fwrite(myString, sizeof(char), strlen(myString), stderr);
	return (1);
}
