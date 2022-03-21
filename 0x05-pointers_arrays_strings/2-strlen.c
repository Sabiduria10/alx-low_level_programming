#include "main.h"

/**
 * _strlen - functions that returns the lenght of a string.
 *
 * @s: pointer to an string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[1] != '\0')
	{
		i += 1;
	}
	return (i);
}

