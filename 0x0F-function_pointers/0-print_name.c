#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name.
 * @name: pointer to name to be printed.
 * @f: pointer to the function.
 *
 * Description: This function takes a name and a function pointer as parameters
 * and then calls the given function to print the name. The given function
 * should be able to print a null-terminated string.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
