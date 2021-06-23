#include "holberton.h"
/**
 * times_table - a times table
 * Return: always zero
 */

void times_table(void)
{
  int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j < 9; j++)
{
k = i * j;
_putchar(k);
_putchar(44);
_putchar(32);
if (j == 9)
{_putchar('\n'); }
}
}
}
