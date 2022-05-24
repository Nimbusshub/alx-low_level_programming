#include "main.h"
/**
 * main - prints natural numbers of 3 and 5 below 1024
 *
 * Return: Always 0 (success)
 */

int main (void)
{
	int number = 1024;
	int sum = 0;
	int i = 0;

	while (i < number)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

