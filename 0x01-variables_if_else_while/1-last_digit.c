#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - determine if number is positive or negative
 * Description: Program that prints strings
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, value;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	value = n % 10;
	if (value > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, value);
	else if (value == 0)
		printf("Last digit of %d is %d and is 0\n", n, value);
	else if (value < 6 && value != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, value);
	return (0);



}

