#include "holberton.h"

/**
 * print_sign - prints out the sign of a number
 * @n: argument to be tested
 * Return: always 0
 */

int print_sign(int n)
{
if (n < 0)
_putchar('-');
else if (n == 0)
_putchar('0');
else
return ('+');
}
