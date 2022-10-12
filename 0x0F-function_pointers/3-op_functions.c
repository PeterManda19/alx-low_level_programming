#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: arg1
 * @b: arg2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: arg1
 * @b: arg2
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: arg1
 * @b: arg2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: numerator
 * @b: denominator
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @a: numerator
 * @b: denominator
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
