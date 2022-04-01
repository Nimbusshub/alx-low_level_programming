#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a function in c that executes other functions
 * @argc: counts arguements
 * @argv: is the arguement vector
 * Return: return 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result = result + x;
	}
	printf("%d\n", result);
	return (0);
}
