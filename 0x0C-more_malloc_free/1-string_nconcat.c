#include "main.h"

/**
 * string_nconcat - function that conncatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2  = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
