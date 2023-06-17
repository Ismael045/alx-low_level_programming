#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
