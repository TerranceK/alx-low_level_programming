/**
 * _islower - test if a chacacter, c, is lowercase.
 *
 * @c: Input value to be tested.
 * Return: 1 if C is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	int lcase;

	if ((c >= 97) && (c <= 122))
	{
		lcase = 1;
	}
	else if ((c >= 65) && (c <= 90))
	{
		lcase = 0;
	}
	else
	{
		/* should print: "Not a number" */
		lcase = 0;
	}

	return (lcase);
}

