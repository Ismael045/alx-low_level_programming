#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}


