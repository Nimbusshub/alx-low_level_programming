#include <stdio.h>

/**
 * main - print numbers in base 16
 * Description: Print numbers in base 16
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}

	putchar(10);

	return (0);


}

