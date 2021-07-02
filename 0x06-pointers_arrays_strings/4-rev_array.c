#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: input array
 * @n: number of elements in array
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
int aux[n];
int i;
for (i = 0; i < n; i++)
{
aux[n - 1 - i] = a[i];
}
for (i = 0; i < n; i++)
{
a[i] = aux[i];
}
}

