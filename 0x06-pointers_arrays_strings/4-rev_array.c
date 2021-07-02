#include "holberton.h"
/**
 * reverse_array - reverses an array
 * print_array - print
 * @a: input array
 * @n: number of elements in array
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
int aux[n];

for (int i = 0; i < n; i++)
{
aux[n - 1 - i] = a[i];
}

for (int i = 0; i < n; i++)
{
a[i] = aux[i];
}
}

void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}
