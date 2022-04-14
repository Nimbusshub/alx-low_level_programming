#include "variadic_functions.h"
/**
 * print_strings - prints all strings
 * @separator: the separator character
 * @n: numbers of strings passed
 * Return: prints all strings (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list letters;

	va_start(letters, n);
	if (separator == NULL)
		separator = "";
	if (n)
	{
		while (i < n)
		{
			string = va_arg(letters, char*);
			if (string)
				printf("%s", string);
			else
				printf("(nil)");
			while (i < n - 1)
			{
				printf("%s", separator);
				break;
			}
			i++;
		}
	}
	printf("\n");
	va_end(letters);
}
