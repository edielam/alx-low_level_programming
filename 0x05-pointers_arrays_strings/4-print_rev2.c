#include "holberton.h"
/**
 * print_rev - print in reverse
 * @s:input param
 * Return: 0
 */
void print_rev(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	i = i - 1;
	while (i >= 0)
	{
	i--;
	s--;
		_putchar(*s);
	}
	_putchar('\n');
}
