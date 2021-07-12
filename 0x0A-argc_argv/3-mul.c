#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: arg count
 * @argv: string
 * Return: zero but one for error
 */

int main(int argc, char *argv[])
{
int mul = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", mul);
return (0);
}
