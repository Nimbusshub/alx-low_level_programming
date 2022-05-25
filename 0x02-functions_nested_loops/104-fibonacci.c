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

	while (i < 98)
	{
		sum = temp;
		temp = fib;
		printf("%ld", fib);
		if (i < 97)
			printf(", ");
		fib = temp + sum;
		i++;
	}
	putchar('\n');
	return (0);
}
