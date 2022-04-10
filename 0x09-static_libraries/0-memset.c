#include "main.h"

/**
 * _memset - program that writes a functions to fill memory with
 * a constant byte.
 * @n: size of bytes
 * @b: constant byte
 * @s: memory area to return
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}

