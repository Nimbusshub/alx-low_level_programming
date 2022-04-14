#include "variadic_functions.h"
/**
 * sum_them_all - sums all inputs
 * @n: the numbers of arguements
 * Return: the sums (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	while (i < n)
	{
		sum = sum + va_arg(numbers, int);
		i++;
	}
	va_end(numbers);
	return (sum);
}
