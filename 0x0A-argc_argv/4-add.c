#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @agrc: arg count
 * @argv: array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 0; i < argc; i++)
{
if (!(isdigit(argv[i])))
{
printf("Error\n");
break;
}
return (1);
}
if (argc < 2)
{
printf("0\n");
}
for (j = 1; j < argc; j++)
{
sum += atoi(argv[j]);
printf("%d\n", sum);
}
return (0);    
}
