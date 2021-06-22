#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * Return: 1 if ic is lowercase and 0 for otherwise
 * @c: input paramter to be checked
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{ return (0);
}
}
