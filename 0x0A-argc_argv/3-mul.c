#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function in c that executes other functions
 * @argc: counts arguements
 * @argv: is the arguement vector
 * Return: return 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if ((argc <= 2) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		result = result * x;
	}
	printf("%d\n", result);
	return (0);
}
