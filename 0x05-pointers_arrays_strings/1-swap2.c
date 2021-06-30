#include "holberton.h"
/**
 * swap_int - swapping
 * @a: input param 1
 * @b: input param 2
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;

return (0);
}
