#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: input param
 * Return: always zero
 */
int print_last_digit(int n)
{
int j;
j = n % 10;
if (j < 0)
{
_putchar(-j + '0');
 return (-j); }
else
{_putchar(j + '0');
return (j); }
}
