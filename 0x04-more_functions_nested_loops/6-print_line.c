#include "main.h"

/**
 * print_line - prints line
 * @n: length of the line
 *
 * Return: void (Success)
 */
void print_line(int n)
{
	int l;

	l = 0;
	while (l < n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
