#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: string to be pointer
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n > 0)
	{

	return (n * factorial(n - 1));
	}
	return (1);
}
