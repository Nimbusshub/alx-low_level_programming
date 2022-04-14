#include "variadic_functions.h"
/**
 * print_numbers - it prints all the numbers passed into its arguements
 * @separator: it seperates arguements
 * @n: the number of inputs
 * Return: numbers (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	if (separator == NULL)
		separator = "";
	if (n)
	{
		va_start(numbers, n);
		while (i < n)
		{
			printf("%d", va_arg(numbers, int));
			while (i < n - 1)
			{
				printf("%s", separator);
				break;
			}
			i++;
		}
	}
	printf("\n");
	va_end(numbers);
}
