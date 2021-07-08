#include "holberton.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s : input string
 * Return: zero
 */

void _puts_recursion(char *s)
{int i;
  i = 0;
  if (s[i] != '\0')
    { _putchar(s[i]);
      i++; }
  return _puts_recursion(char *s);
    if (s[i] == '\0');
      return ('\n');
}
