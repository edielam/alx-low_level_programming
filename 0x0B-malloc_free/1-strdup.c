#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: always 0
 */

char *_strdup(char *str)
{char *s, *p;
int i = 0;

while (str[i])
i++;
s = malloc(i + 1);
p = s;
while (*str)
*p++ = *str++;
*p = '\0';
return (s)
}
