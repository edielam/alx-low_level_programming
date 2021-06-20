#include <stdio.h>
/**
 * main - print out combinations
 * Return: 0
 */

int main(void)
{
	int a = 48, b = 48, c = 48, d = 49;

	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (!(a == 57 &&
						b == 56 &&
						c == 57 &&
						d == 57))
					{
						putchar(44);
						putchar(' ');
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			b = a;
			d = b + 1;
		}
		a++;
		b = 48;
		c = a;
		d = b + 1;
	}
	putchar(10);
	return (0);
}
