#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print the given name
 * @name: Name to print
 * @f: Pointer to void function, taking a char * as arg
 * Return: nothing
 */
void print_name(char *name, void (*f)(char*))
{
	f(name);
}
