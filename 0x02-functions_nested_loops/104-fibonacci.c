#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a;
	unsigned long b = 1;
	unsigned long c = 2;
	unsigned long d;



	for (a = 0; a < 98; a++)

	{

		if (a >= 97)
		{

			printf("%lu\n", b);
		}
		else
		{

			printf("%lu, ", b);
			d = b + c;
			b = c;
			c = d;
		}
	}
	return (0);
}
