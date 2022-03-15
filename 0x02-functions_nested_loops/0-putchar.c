#include "main.h"

/**
 *main - print _putchar
 * Description: Program that  will print the function _putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphab[9] = "_putchar";

	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(alphab[i]);
	}
	_putchar(10);
	return (0);



}

