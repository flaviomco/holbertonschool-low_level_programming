#include "holberton.h"

/**
 * _puts - Entry point
 * @str: int variable
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{

	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
