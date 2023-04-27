#include "main.h"

/**
 * _isdigit - Checks if a character is digit from 0 to 9
 * @t: The character to be checked
 *
 * Return: 1 if the character is digit, 0 otherwise
 */

int _isdigit(int x)
{
	if(x >= 0 && x <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

