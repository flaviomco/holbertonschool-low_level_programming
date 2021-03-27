#include <stdio.h>

/**
 *main - prints all possible different combinations of three digits
 *
 *Return: 0
 */

int main(void)
{
	int i, j, h;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (h = j + 1; h <= 9; h++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			putchar((h % 10) + '0');
			if (i == 7 && j == 8 && h == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar ('\n');
	return (0);
}
