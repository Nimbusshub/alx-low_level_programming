/**
 * _puts_recursion - it prints out a string
 * @s: a pointer to a string
 * Return: the string (Success)
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
