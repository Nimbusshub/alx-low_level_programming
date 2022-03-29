#include "main.h"
/**
 * set_string - the fuction changes the pointer of a string to
 * another
 * @s: a pointer to a char
 * @to: the pointer it points to
 * Return: points to to (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
