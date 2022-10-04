#include "search_algos.h"

/**
 * linear_search - linearly search for a number in an array
 * @array: pointer to the first element of the array to search
 * @size: number of elements of the arrary to search in
 * @value: target value to search for
 * Return: return the index the value is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
	return (EXIT_SUCCESS);
}
