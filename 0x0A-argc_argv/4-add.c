#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: if no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */
int main(int argc, char *argv[])
{
	int total, m;
	char *p;
	int num;

	total 0;
	if (argc > 1)
	{
		for (m = 1; argv[m]; i++)
		{
			num = strtol(argv[m], &p, 10);
			if (!*p)
				total += num
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
printf("%d\n", total);
return (0);

