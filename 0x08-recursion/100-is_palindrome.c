#include "main.h"
/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: input string
 * @start: start of the string
 * @end: end of the string
 * Return: int
 */
int is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome(s, start + 1, end - 1));
	}
}
