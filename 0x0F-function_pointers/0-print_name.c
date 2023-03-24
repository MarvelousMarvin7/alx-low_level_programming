#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: user name input
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
