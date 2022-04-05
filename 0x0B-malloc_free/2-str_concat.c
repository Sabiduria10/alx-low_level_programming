#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *empt;
	int l, len1, len2, k;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	l = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	l = 0;
	while (l < len1)
	{
		s3[l] = s1[l];
		l++;
	}
	k = 0;
	while (k <= len2)
	{
		s3[l] = s2[k];
		l++;
		k++;
	}
	return (s3);
}
