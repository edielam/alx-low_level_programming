#include <stdio.h>
#include <stdio.h>

/**
 * main - whats my name
 * @argc: arg count
 * @argv: array of string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
