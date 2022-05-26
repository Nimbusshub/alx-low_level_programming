#include "main.h"

/**
 * main - prints the main program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int container = 612852475143;
	long int i = 2;

	while (i <= container)
	{
		if ((container % i) == 0)
		{
			container /= i;
			i--;
		}
		i++;
	}

	printf("%ld\n", i);
	return (0);
}
