#include "function_pointers.h"
/**
 * print_name - a callback function
 * @name: a pointer to a character arguement
 * @f: a funtion pointer
 * Return: a printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
