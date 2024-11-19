#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}
