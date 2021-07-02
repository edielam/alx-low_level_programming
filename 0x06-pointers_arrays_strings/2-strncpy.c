#include "holberton.h"

/**
 * _strncpy - copy strings
 * @dest: input 1
 * @src: input 2
 * @n: byte limit
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (src[j] != '\0' && j < n)
{
dest[j] = src[j];
j++;
}
if (j < n)
{
for (; j < n; j++)
dest[j] = '\0';

}
return (dest);
}
