#include "main.h"

/**
 * print_times_table - prints times tables n times
 * @n: number of times to print the times table
 * Return: print the times table no of n times
 */

void print_times_table(int n)
{
	int i, j, r;

	if (n >= 0 && n <= 15)

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				printf("%d", r);
				if (i < n + 1 && j < n)
				{
					putchar(',');
					printf("   ");
				}
			}
			putchar('\n');
		}

}
