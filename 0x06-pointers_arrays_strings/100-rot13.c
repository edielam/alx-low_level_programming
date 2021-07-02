#include "holberton.h"
/**
 * *rot13 - function that encodes a string using rot13.
 * @str: pointer pointed to the variable s , of type character
 * Return: pointer of type char.
 */
char *rot13(char *str)
{
	int i;
	char *p = str;

	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		i = 0;
		while (i < 53)
		{
			if (*str == original[i])
			{
				*str = code[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (p);
}
