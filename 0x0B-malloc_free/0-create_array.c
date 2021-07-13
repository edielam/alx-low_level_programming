#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: first char
 * Return: always zero
 */

char *create_array(unsigned int size, char c)
{unsigned int i = 0;
char *arra = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}

if (arra == NULL)
return (NULL);
while (i < size)
{
arra[i] = c;
i++;
}
return (arra);
}
