#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concat strings with malloc
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{size_t a1, a2, a3, i = 0;
char *a;

a1 = strlen(s1);
a2 = strlen(s2);
a3 = a1+a2+1;
a = malloc(a3);

while(*s1 != '\0') {
a[i] = *s1;
s1++;
i++;
}
while(*s2 != '\0') {
a[i] = *s2;
s2++;
i++;
}
a[i] = '\0';

return a;
}
