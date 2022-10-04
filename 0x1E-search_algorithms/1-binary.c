#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array
 * @array: pointer to the array to search for
 * @size: size of the array
 * @value: the target value to search for
 * Return: the target value index else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, j, start = 0, end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	for (i = start; i <= end; i++)
	{
		mid = (start + end) / 2;

		j = start;

		arr:
		if (j <= end)
		{
			if (j == start)
				printf("Searching in array: ");
			else
				printf(", ");
			printf("%d", array[j]);
			if (j == end)
				printf("\n");
			j++;
			goto arr;
		}


		if (array[mid] < value)
			start = i = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
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
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
	return (EXIT_SUCCESS);
}
