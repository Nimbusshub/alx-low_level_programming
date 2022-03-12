#include <stdio.h>

/**
 * main - print all possible 3 digits numbers
 * Description: Print all possible 3 digits numbers seperated by
 * comma and space without repeating combinations of digits
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, b, c;

	n = 48;
	b = 48;
	c = 48;
	while (b < 58)
	{
		n = 48;
		while (n < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (b != n && b != c && n != c && b < n && n < c)
				{
					putchar(b);
					putchar(n);
					putchar(c);
					if (n == 56 && b == 55 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			n++;
		}
		b++;
	}
	putchar(10);

	return (0);


}

