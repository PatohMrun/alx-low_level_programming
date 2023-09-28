#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (void);
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return (void);
	}
}


