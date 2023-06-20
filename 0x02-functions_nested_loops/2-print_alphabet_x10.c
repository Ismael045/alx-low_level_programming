#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n;
	int tt;

	for (tt = 1; tt <= 10 ; tt++)
	{
		for (n = 97; n <= 122; n++)
			_putchar(tt);
	}
	_putchar('\n');
}
