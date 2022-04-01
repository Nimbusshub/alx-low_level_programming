#include <stdio.h>
/**
 * main - a function in c that executes other functions
 * @argc: counts arguements
 * @argv: is the arguement vector
 * Return: return 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
