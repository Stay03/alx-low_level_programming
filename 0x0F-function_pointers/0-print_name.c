#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name of the person
 * @f: Function to print the name
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
