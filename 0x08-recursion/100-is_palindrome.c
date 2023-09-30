#include "main.h"
/**
 * _strlen_recursion - checks the length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * check_palindrome - checks whether a string is a palindrome
 * @s: parameter 1
 * @start: parameter 2
 * @end: parameter 3
 * Return: int
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, 0, length - 1));
}
