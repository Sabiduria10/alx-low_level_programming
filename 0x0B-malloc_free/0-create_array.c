#include <stdlib.h>

/**
 * create_array - create array of chars initialized w/ specific char
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: Pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int;

	k = 0;
	if (size != 0)
		ar = malloc(size * sizeof(c));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (k < size)
	{
		ar[k] = c;
		k++;
	}
	return (ar);
}
