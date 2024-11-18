#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name as is
 * @name: Pointer to the name string to print.
 *@f: parameters
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
