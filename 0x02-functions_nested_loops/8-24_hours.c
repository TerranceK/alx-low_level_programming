#include"main.h"

/**
 * jack_bauer - function that prints every minute in a day.
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if ((i == 2) && (j == 4) && (k == 0) && (l == 0))
					{
						goto out_of_loops;
					}
					else
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
out_of_loops:
}