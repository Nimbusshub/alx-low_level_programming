#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 * Description: Print numbers from 0 to 9 with , and spaces in
 * between
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar(10);

	return (0);


}

