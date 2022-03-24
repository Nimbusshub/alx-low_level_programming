#include "main.h"
/**
 * reverse_array - This is a function that prints the reverse of
 * an array
 * @a: is a pointer to an array
 * @n: is the size of array a
 * Return: the reverse of the array (Sucess)
 */
void reverse_array(int *a, int n)
{
	int start;
	int store;

	start = 0;
	while (start < n - 1)
	{
		store = a[n - 1];
		a[n - 1] = a[start];
		a[start] = store;
		n--;
		start++;
	}
}
