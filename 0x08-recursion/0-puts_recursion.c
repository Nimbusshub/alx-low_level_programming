#include "main.h"
/**
 * _puts_recursion - it prints out a string
 * @s: a pointer to a string
 * Return: the string (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
