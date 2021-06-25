#include "holberton.h"
/**
  * _isupper - uppercase of a letter
  * @c: variable of a letter
  * Return: 1 if upper always 0.
  */
int _isupper(int c)
{
int i;
for (i = 65; i <= 90; i++)
{
if (c == i)
{
return (1);
}
else
return (0);
}
}
