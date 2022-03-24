#include "main.h"
/**
 * string_toupper - This function prints stings in upper case
 * @str: The string to print in upper case
 * Return: strings will be in uppercase (Success)
 */
char *string_toupper(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
		{
			*(str + count) = *(str + count) - 32;
		}
		count++;
	}
	return (str);
}
