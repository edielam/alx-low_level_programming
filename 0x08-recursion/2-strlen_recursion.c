#include "holberton.h"
/**
 * _strlen_recursion - length of a string
 * @s : string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == 0)
		return (0);

	i = _strlen_recursion(s + 1);

	return (i + 1);
}
