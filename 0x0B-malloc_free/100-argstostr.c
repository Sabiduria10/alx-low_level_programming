#include <stdlib.h>

/**
 * argstostr - Concatenate all arguments of a program
 * @ac: Arg count
 * @av: Array of arguments
 *
 * Return: Pointer to new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = len = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			len++;
			b++;
		}
		len++;
		a++;
	}
	len++
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	a=b=0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != 0)
		{
			str[c] = av[a][b];
			c++;
			b++;
		}
		str[c] = '\n';
		c++;
		a++;
	}
	return (str);
}
