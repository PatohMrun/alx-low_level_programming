#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the pointer to a string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
		length += 1;
		return (length);
	}
}

