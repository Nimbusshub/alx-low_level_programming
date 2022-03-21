#include "main.h"

/**
 * _puts - prints out all strings followed by a new line
 * @str: is a pointer
 * Return: string with a new line (Success)
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
