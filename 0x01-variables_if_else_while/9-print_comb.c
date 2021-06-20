#include <stdio.h>
/**
 * main - print out hex
 * Return: 0
 */

int main(void)
{
int a;

for (a = 48; a <= 57; a++)
{
putchar(a);
if ( a != 57)
{putchar(44);
 putchar(32); }
}
putchar(10);
return (0);
}
