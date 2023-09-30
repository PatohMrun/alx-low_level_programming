#include "main.h"

/**
 * check_divisibility - checks for divisibilty
 * @n: the number to check
 * @i: divisor
 * Return: int
 */
int check_divisibility(int n, int i);
int check_divisibility(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	else
	{
		return (check_divisibility(n, i + 6));
	}
}
/**
 * is_prime_number - checks for prime number
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (check_divisibility(n, 5));
	}
}
