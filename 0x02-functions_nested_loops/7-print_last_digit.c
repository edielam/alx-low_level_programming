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
_putchar(-n + '0');
 return (-n); }
else
{_putchar(n + '0');
return (n); }
}
