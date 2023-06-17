#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char x = 'b';

	while (x <= 'm')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
