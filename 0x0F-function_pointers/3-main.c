#include "3-calc.h"
/**
 * main - the main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fptr = get_op_func(argv[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fptr(a, b));
	return (0);
}
