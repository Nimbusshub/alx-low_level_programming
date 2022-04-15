#include "variadic_functions.h"
/**
 * print_all - prints all format (data types)
 * @format: any form of inputted data type
 * Return: prints all (Success)
 */
void print_all(const char * const format, ...)
{
	va_list all;
	char *string;
	unsigned int i = 0, c = 0, j = 0;
	const char array[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (array[j])
		{
			if (format[i] == array[j] && c)
			{
				printf("\n");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(all, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(all, double)), c = 1;
				break;
			case 's':
				string = va_arg(all, char*), c = 1;
				if (string)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	printf("\n"), va_end(all);
}

