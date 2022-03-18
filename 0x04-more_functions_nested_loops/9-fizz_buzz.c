#include <stdio.h>
#include "main.h"

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

	while (number <= 100)
	{
		if (number % 15 == 0)
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
		number++;
	}
	printf("\n");
	return (0);
}
