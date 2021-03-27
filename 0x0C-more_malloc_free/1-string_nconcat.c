#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * string_nconcat - entry point
 * @s1: char variable
 * @s2: char variable
 * @n: unsigned int
 *
 * Return: ar
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int k = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	ar = malloc(n + k + 1);
	if (ar == NULL)
		return (NULL);
	j = 0;
	while (j < k)
	{
		ar[j] = s1[j];
		j++;
	}
	k = 0;
	while (k < n && s2[k] != '\0')
	{
		ar[j] = s2[k];
		j++, k++;
	}
	ar[j] = '\0';
	return (ar);
}
