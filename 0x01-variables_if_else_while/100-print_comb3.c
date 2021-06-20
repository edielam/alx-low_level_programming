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
{
for (b = 48; b <= 57; b++)
{
if (a != b && a < b)
{putchar(a);
putchar(b);
if (a != 56)
{putchar(44);
putchar(32);
}}

}
}
putchar(10);
return (0);
}
