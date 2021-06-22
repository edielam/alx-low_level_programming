#include "holberton.h"

/**
 * _isalpha - checks for alphabets
 * @c: input parameter to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
int b[] = {91, 92, 93, 94, 95, 96};
int i;
for (i = 0; i < 6; i++)
{
if (c >= 65 && c <= 122 && c != b[i])
{
return (1);
}
else
{
return (0);
}
}
}
