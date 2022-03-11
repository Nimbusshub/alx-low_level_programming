#include <stdio.h>

/**
 *main - print numbers in base 10
 * Description: Print numbers in base 10
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar(10);
	return (0);



}

