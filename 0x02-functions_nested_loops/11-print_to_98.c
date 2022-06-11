#include "main.h"

/**
 * print_to_98.c - prints all natural numbers from n to 98 followed by a line
 * 
 * @n: the first number to be printed
 */

void print_to_98(int n){
	int count;
	int number = n;

	for(count = n; count <99; count++)
	{
		_putchar(number);
		number++;
		_putchar(',');

	}
	putchar('\n');

}
