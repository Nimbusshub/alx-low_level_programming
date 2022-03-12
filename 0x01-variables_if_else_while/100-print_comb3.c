#include <stdio.h>

/**
 * main - print all possible 2 digits numbers
 * Description: Print all possible 2 digits numbers seperated by
 * comma and space without repeating combinations of digits
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, b;

	n = 48;
	b = 48;
	while (b < 58)
	{
		n = 48;
		while (n < 58)
		{
			if (b != n && b < n)
			{
				putchar(b);
				putchar(n);
				if (n == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		b++;
	}

	putchar(10);

	return (0);


}

