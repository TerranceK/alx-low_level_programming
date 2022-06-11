/**
 * _isalpha - test if input is an alphabetic character.
 *
 * @c: Input value to be tested.
 * Return: 1 if c is an alphabetic character.
 */

int _isalpha(int c)
{
	int lalpha;

	if ((c >= 97) && (c <= 122))
	{
		lalpha = 1;
	}
	else if ((c >= 65) && (c <= 90))
	{
		lalpha = 1;
	}
	else
	{
		/* should print: "Not a number" */
		lalpha = 0;
	}

	return (lalpha);
}

