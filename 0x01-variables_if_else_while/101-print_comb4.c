#include <stdio.h>
/**
 * main - print out hex
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c;

for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
if (a != b && a != c && b != c && a < b && a < c && b < c)
{putchar(a);
putchar(b);
putchar(c);
if (a != 55)
{putchar(44);
putchar(32); }

}}

}
}
putchar(10);
return (0);
}
