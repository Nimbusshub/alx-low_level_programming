#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case ten times
 * Description: Program will print alphabets in lower case ten times
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int again = 0;

	while (again < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar(10);
		again++;
	}

}

