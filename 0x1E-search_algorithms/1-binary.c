#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array
 * @array: pointer to the array to search for
 * @size: size of the array
 * @value: the target value to search for
 * Return: the target value index else -1
 */

// int binary_search(int *array, size_t size, int value)
// {   
    // int mid = size / 2;
    // size_t i = 0;
    // 
    // if (!array[mid])
        // return (-1);
// 
    // arr:
    // if (i < size)
    // {   
        // if (i == 0)
            // printf("Searching in array: "); 
        // else
            // printf(", "); 
        // printf("%d", array[i]);
        // if (i + 1 == size)
            // printf("\n");
        // i++;
        // goto arr;
    // }
    // 
    // if (value == array[mid] && !array[mid + 1])
        // return (mid);
    // if (value <= array[mid])
        // return search(array, 0, mid, value);
    // else
        // return search(array, mid + 1, size, value);
        // 
    // 
// }
// 
// int search(int *array, int start, int end, int target)
// {
    // int mid = (start + end) / 2
    // int i = start, j = end;
    // 
    // arr:
        // if (i < j)
    // {   
        // if (i == start)
            // printf("Searching in array: "); 
        // else
            // printf(", "); 
        // printf("%d", array[i]);
        // if (i + 1 == i)
            // printf("\n");
        // i++;
        // goto arr;
    // }
        // 
    // 
    // if (start > end)
        // return (-1);
    // if (array[mid] == target && !array[mid + 1])
        // return (mid);
    // if (array[mid] <= target)
        // return search(array, mid + 1, end, target);
    // else
        // return search(array, start, mid - 1, target);
// }
// 

int binary_search(int *array, size_t size, int value)
{
    int mid;
    int i; 
    int start = 0;
    int end = size - 1;
    int found_val = -1;
    
    
    for (i = start; i <= end; i++)
    {   
        mid = (start + end) / 2;
        
        int j = start;
        
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
        }
        
        // if (array[mid] == value)
            // return (mid);
        if (array[mid] >= value)
        {
            start = i = 0;
            end = mid - 1;
            found_val = mid;
        }
        else
        {
            start = i = mid + 1 ;
            end = end;
        }
    return (found_val);
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




