#include "main.h"

/**
 * swap_int - swaps two integers to one another
 * @a: is a pointer
 * @b: is a pointer
 * Return: swaps integers (Success)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
