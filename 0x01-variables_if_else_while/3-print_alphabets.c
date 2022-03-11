#include <stdio.h>

/**
 *main - print alphabets in lowercase then uppercase
 * Description: Print alphabets in lower case then upper case
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphab, baba;

	alphab = 'a';
	baba = 'A';
	while (alphab <= 'z')
	{
		putchar(alphab);
		alphab++;
	}
	while (baba <= 'Z')
	{
		putchar(baba);
		baba++;
	}
	putchar(10);

	return (0);



}

