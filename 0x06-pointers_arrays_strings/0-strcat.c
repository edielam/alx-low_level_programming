#include "holberton.h"
/**
 * _strcat - concat strings
 * @dest: input 1
 * @src: input 2
 * Return: always 0
 */

char _strcat(char *dest, char *src)
{
int id, jd, kc, lc;
for(id = 0; dest[id] != 0; id++)
for (kc = 0; src[kc] != 0; kc++)
lc = 0;
for (jd = id; jd < (id + kc); jd++)
{dest[jd] = src[lc];
lc++; }
dest[id + kc] = 0;
return (dest);
}
