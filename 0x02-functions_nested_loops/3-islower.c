#include "main.h"
/**
 * _islower - Returns 1 if letter is lowercase,0 if not.
 * Return: 1 if lowercase 0 if not
 * @c: character letter
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
