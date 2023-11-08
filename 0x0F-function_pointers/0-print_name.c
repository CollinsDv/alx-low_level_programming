#include "function_pointers.h"

/**
 * print_name - calls a function with a function
 * call operator with a string
 *
 * @name: pointer to a string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
