#include <stdio.h>
/**
 * main - prints its name
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, char **argv[])
{
	if (argc >= 1)
	{
		printf("%s", argv[0]);
	}
	return (0);
}
