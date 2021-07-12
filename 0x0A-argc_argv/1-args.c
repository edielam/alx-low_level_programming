#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of args
 * @argc: arg count
 * @argv: string of args
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
