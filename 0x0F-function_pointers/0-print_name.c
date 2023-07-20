#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 * @name: car srting
 * @f: function pointer thta takes a string argument
 */

void print_name(char *name,void (*f)(char *))
{
	f(name);
}
