#include "main.h"
/**
 * check_palindrome - checks whether a string is a palindrome
 * @s: input string
 * @start: start of the string
 * @end: end of the string
 * Return: int
 */
int check_palindrome(char *s, int start, int end);
int check_palindrome(char *s, int start, int end)
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
		return (check_palindrome(s, start + 1, end - 1));
	}
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: input string
 * Return: int
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (check_palindrome(s, 0, length - 1));
}
