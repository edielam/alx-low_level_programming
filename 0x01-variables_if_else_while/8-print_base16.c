#include <stdio.h>
/**
 * main - print out hex
 * Return: 0
 */

int main(void)
{
int a;
int b;

for (a = 48; a <= 57; a++)
{putchar(a); }
for (b = 'a'; b <= 'f'; b++)
{putchar(b); }
putchar(10);
return (0);
}
