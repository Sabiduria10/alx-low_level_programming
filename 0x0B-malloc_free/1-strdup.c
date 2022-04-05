#include <stdlib.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * allocate mem w/ malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int l, len;

	if (str == NULL)
		return (NULL);
	l = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	nstr = malloc(len * sizeof(*str));
	if (nstr == NULL)
		return (NULL);
	while (l <= len)
	{
		nstr[l] = str[l];
		l++;
	}
	return (nstr);
}
