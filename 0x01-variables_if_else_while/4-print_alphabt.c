#include <stdio.h>

/**
 *main - print alphabets in lower case except for e and q
 * Description: Program will print alphabets in lower case without e
 * and q
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphab;

	alphab = 'a';
	while (alphab <= 'z')
	{
		if (alphab != 'e' && alphab != 'q')
		{
			putchar(alphab);
		}
		alphab++;
	}
	putchar(10);
	return (0);



}

