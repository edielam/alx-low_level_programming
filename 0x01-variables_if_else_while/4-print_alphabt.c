#include <stdio.h>
/**
 * main - print with exceptions
 * Return: 0
 */
int main(void)
{int c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			{putchar(c);
}}
	putchar(10);
	return (0);
}
