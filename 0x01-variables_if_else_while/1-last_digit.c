#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - positive or negative
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (m > 5)
	  {printf("Last digit of %d is %d is %d greater than 5\n", n, m); }
	else if (m == 0)
	  {printf("Last digit of %d is 0 and is zero\n", n); }
	else if (m < 6 && m != 0)
	  {printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m); }
	else
	  {printf("\n"); }
	return (0);
}
