#include "holberton.h"
/**
 * _pow_recursion - raise @x to the power of @y
 * @x: input 1
 * @y: input 2
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int pw = 1;

	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	pw = _pow_recursion(x, y - 1);

	return (pw * x);
}
