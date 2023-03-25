#include "3-calc.h"

/**
 * op_add - add values on command line
 * @a: first value
 * @b: second value
 * Return: sum of value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract values on command line
 * @a: first value
 * @b: second value
 * Return: sub of value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply values on command line
 * @a: first value
 * @b: second value
 * Return: product of value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide values on command line
 * @a: first value
 * @b: second value
 * Return: division of value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - add values on command line
 * @a: first value
 * @b: second value
 * Return: modulo of value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
