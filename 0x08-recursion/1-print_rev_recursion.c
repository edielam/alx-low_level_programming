#include "holberton.h"
/**
 * _print_rev_recursion - print string reverse
 * @s : input string
 * Return: always zero
 */

void _print_rev_recursion(char *s)
{
int i;
i = 0;
if (*(s + i) == '\0')
{
return;
}
i++;
_print_rev_recursion(s + i);
 _putchar(*s);
}
