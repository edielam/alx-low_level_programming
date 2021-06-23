#include "holberton.h"
/**
 * times_table - a times table
 * Return: always zero
 */

void times_table(void);
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
_putchar(i * j);
_putchar(44);
_putchar(32);
if (j == 9)
{_putchar('\n'); }
}
}
}
