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
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				r = i * j;
				if (r <= 9)
					printf(",   %d", r);
				else if (r >= 10 && r <= 99)
					printf(",  %d", r);
				else if (r >= 100 && r <= 999)
					printf(", %d", r);
			}
			putchar('\n');
		}
	}
}
