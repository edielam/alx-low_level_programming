#include "holberton.h"
/**
 * jack_bauer - printing the minutes
 * Return : 0
 */

void jack_bauer(void)
{
int i, j, k, l;
for (i = 48; i <= 50; i++)
{
for (j = 48; i <= 57; j++)
{
for (k = 48; j <= 53; k++)
{
for (l = 48; l <= 57; l++)
{
if (i <= 50 && j <= 52)
break;
_putchar(i);
_putchar(j);
_putchar(58);
_putchar(k);
_putchar(l);
_putchar(32);
}
}
}
}
}
