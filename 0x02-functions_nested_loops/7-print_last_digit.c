#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: input param
 * Return: always zero
 */

int print_last_digit(int n)
{int j;
if (n < 0)
n = -n;
j = n % 10;
return (j);
}
