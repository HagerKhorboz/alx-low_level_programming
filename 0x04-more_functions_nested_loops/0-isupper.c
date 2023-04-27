#include main.h
/* Check if the letter is upper or not */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return 1;
	else
		return 0;
}
