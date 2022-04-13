#include <stddef.h>
#include <stdlib.h>
#ifndef _FUNCTION_POINTER_H_
#define _FUNCTION_POINTER_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
