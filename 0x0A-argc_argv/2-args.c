#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the file followed by a new line
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}

