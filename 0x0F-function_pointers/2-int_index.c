#include "function_pointers.h"
/**
 * int_index - searches for the first index of an array that
 * matches what the function pointers points to
 * @array: the array of numbers to search through and compare with
 * @size: size of the array
 * @cmp: a funtion pointer
 * Return: the index of the array (Success) else return -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((cmp == NULL) || (array == NULL))
		return (0);
	if (size <= 0)
		return (-1);
	if ((cmp) && (array))
		while (i < size)
		{
			if ((*cmp)(array[i]))
				return (i);
			i++;
		}
	return (-1);
}

