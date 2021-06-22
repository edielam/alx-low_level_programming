#include "holberton.h"

/**
 * _isalpha - checks for alphabets
 * @c: input parameter to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

