#include <stdio.h>
/**
 * main - program will print numbers with letters
 * Description:  Program will print numbers from 1 to 100, for
 * multiples of 3, it prints Fizz, for multiples of 5 it prints Buzz
 * for multiples of 5 and 3, it prints FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 1;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");
	return (0);
}
