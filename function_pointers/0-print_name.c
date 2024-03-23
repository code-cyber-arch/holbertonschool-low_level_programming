#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: The function pointer to use for printing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
