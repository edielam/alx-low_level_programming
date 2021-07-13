#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: always 0
 */


char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	nstr = malloc(len * sizeof(*str));
	if (nstr == NULL)
		return (NULL);
	while (i <= len)
	{
		nstr[i] = str[i];
		i++;
	}
	return (nstr);
}
