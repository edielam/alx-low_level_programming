#include <stdio.h>

/**
 * main - print all alphabets
 * Return: 0
 */
int main(void)
{int c;
int d;
for (c = 'a'; c <= 'z'; c++)
{putchar(c); }
for (d = 'A'; d <= 'Z'; d++)
{putchar(d); }
putchar(10);
return (0);
}
