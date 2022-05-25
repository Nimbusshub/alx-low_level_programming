#include "main.h"

/**
 * main - prints fibonacci numbers to 50
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib = 1;
	long int temp = 1, sum = 0;
	int i = 0;
	long int container = 0;

	while (i < 32)
	{
		sum = temp;
		temp = fib;
		if (fib % 2 == 0)
			container += fib;
		fib = temp + sum;
		i++;
	}
	printf("%ld\n", container);
	return (0);
}
