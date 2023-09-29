#include "main.h"
/**
 * _sqrt_recursion - checks natural square root
 *@n: the number
 * @i:base
 * Return: int
 */
int sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 2));
	}
/**
 * sqrt_helper - checks for the matching perfect root
 * @i: base
 * @n: number
 * Return: int
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
