#include "main.h"

/**
 * print_alphabet -  Program will print alphabets with the prototype
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}

