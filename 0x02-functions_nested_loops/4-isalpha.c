#include "main.h"
/**
 * _isalpha - Check if character is alphabetic
 *@c: int character
 * Return: 1 if lowercase or uppercase, 0 if not
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
