#include "main.h"

/**
 * puts2 - checks and print strings in two
 * @str: is a pointer
 * Return: Return strings (Success)
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar([str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
