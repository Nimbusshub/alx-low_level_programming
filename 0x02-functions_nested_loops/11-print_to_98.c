#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers
 * Description: prints all functins
 * @n: starting imteger
 * Return: Always 0 (Success)
 *
 */
void print_to_98(int n)

{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");

}
