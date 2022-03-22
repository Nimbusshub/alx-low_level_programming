#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints arrays
 * @a: is a pointer
 * @n: is an array
 * Return: arrays (Success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
			printf("\n");
}
