#include "holberton.h"
/**
 * _strspn - length of of a prefix substring
 * @s: input 1
 * @accept: input 2
 * Return: the number of bytes in the initial segment of @s which
 * only consists of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, foundChar;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			foundChar = 0;
			if (*s == accept[i])
			{
				res++;
				foundChar = 1;
				break;
			}
		}
		if (!foundChar)
			break;
		s++;
	}
	return (res);
}
