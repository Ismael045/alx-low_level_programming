#include "main.h"
/**
 * binary_to_uint - converts a  binary number to unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int count = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0')
		{
			result = (result << 1) | 0;
		}
		else if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
		count++;
	}

	return (result);
}
