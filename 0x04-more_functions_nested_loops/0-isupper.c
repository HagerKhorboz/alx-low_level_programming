#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @t: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int t)
{
	if (t >= 65 && t <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

