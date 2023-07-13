#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * Description: if malloc failes,terminate process with status 98
 * @b: unsigned int memory size
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
