#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value of integers in an array
 * @max: the maximum value of integers in an array
 * Return: return pointer (success)
 */
int *array_range(int min, int max)
{
	int *pointer = NULL;
	int i = 0;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(*pointer) * ((max - min) + 1));
	if (pointer == NULL)
		return (NULL);
	while (min <= max)
	{
		*(pointer + i) = min;
		min++;
		i++;
	}
	return (pointer);
}
