#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int p;

	for (p = 0; s[p] != '\0'; p++)
		;
				
		return (p);
		
}
