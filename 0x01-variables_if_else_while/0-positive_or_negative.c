#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - execution begins here
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
