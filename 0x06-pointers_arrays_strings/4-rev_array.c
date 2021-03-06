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
	int i, j, d;

	if (n % 2 != 0)
		d = n + 1;
	else
		d = n;
	for (i = 0; i < d / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
