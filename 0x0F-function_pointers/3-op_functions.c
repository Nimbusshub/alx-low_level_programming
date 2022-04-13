#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: arguement 1
 * @b: arguement 2
 * Return: the function (Success)
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference of a and b
 * @a: arguement 1
 * @b: arguement 2
 * Return: the function (Success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns the product of a and b
 * @a: arguement 1
 * @b: arguement 2
 * Return: the function (Success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the result of the division of a by b
 * @a: arguement 1
 * @b: arguement 2
 * Return: the function (Success)
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - returns the remainder of the division of a by b
 * @a: arguement 1
 * @b: arguement 2
 * Return: the function (Success)
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
