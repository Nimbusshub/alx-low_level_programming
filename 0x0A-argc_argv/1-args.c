#include <stdio.h>
/**
 * main - a function in c that executes other functions
 * @argc: counts arguements
 * @argv: is the arguement vector
 * Return: return 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
