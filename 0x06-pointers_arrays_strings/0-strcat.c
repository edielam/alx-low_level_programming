#include "holberton.h"
/**
 * _strcat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
/* Pointer should not be a null pointer */
if ((dest == NULL) && (src == NULL))
return (NULL);
/* Create copy of dest */
char *start = dest;
/* Find the end of the destination string */
while (*start != '\0')
{
start++;
}
/* Now append the source string characters */
/* until not get null character of src */
while (*src != '\0')
{
*start++ = *src++;
}
/* Append null character in the last */
*start = '\0';
return (dest);
}
