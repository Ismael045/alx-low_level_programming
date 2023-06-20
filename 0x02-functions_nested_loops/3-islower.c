#include "main.h"
/**
 * _islower - Returns 1 if the input is lowercase and 0 if not
 * Return 1 if lowercase 0 if not
 */
int _islower(int c)
{
	if (c > 96 || c < 123)
		return (1);
	else
		return (0);
}
