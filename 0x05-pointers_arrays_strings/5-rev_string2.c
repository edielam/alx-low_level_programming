#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: input string
 * Return: always zero
 */

void rev_string(char *s)
{
  int i;
  i = 0;
  while (*s != '\0')
    {i++;
      s++;
    }
  i--;
  while (i >= 0)
    {i--;
      s--;
      _putchar(*s);
    }
}
