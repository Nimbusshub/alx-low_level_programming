#include "main.h"
/**
 * print_number - prints numbers with putchar
 * @n: number to print with putchar
 *
 * Return: number (success)
 */

void print_number(int n)
{
	int flag = 0, m = 1, i, container;
	unsigned int num, num2;

	if (n < 0)
	{
		num = n * -1;
		flag++;
	}
	else
		num = n;
	num2 = num;

	while (num / 10 != 0)
	{
		m = m * 10;
		num = num / 10;
	}

	for (i = 0; i >= 0 ; i++, m /= 10)
	{
		if (m == 0)
			break;
		if (flag == 1)
		{
			putchar('-');
			flag = 0;
		}
		container = num2 / m;
		putchar(container + 48);
		num2 = num2 % m;
	}
}
