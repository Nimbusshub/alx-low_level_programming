#include <stdio.h>

/**
 *main - print alphabets in lower case
 * Description: Program will print alphabets in lower case
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphab;

	alphab = 'a';
	while (alphab <= 'z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar(10);
	return (0);



}

