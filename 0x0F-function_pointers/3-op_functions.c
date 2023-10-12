#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - +
 * @a: first num
 * @b: second num
 * Return: int
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - -
 * @a: first num
 * @b: second num
 * Return: int
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - *
 * @a: first num
 * @b: second num
 * Return: int
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - /
 * @a: first num
 * @b: second num
 * Return: int
 */
int op_div(int a, int b)
{
if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
 * op_mod - %
 * @a: first num
 * @b: second num
 * Return: int
 */
int op_mod(int a, int b)
{
if (b)
		return ((a) % (b));
	printf("Error\n");
	exit(100);
}
