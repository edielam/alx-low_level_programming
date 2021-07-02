#include <stdio.h>
/**
 * _strncat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * @n: num of bytes to be append from src
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		j++;
	}

	i++;
	dest[i] = '\0';
	return (dest);
}
