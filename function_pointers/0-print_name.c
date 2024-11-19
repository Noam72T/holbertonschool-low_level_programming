#include "function_pointers.h"

/**
* print_name - Prints a name using a given function.
* @name: The name to print.
* @f: A pointer to a function that takes a char * as argument and returns void.
* Description: This function takes a name and a pointer to a function
* to format and print that name. If either name or f is NULL, it does nothing.
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
