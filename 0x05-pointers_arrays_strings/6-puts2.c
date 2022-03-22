#include "main.h"

/**
 * puts2 - checks and print strings in two
 * @str: is a pointer
 * Return: Return strings (Success)
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}

