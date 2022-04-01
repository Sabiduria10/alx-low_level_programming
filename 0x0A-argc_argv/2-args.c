#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives 
 * @argc: argument count
 * @aargv: argument vector, array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}

	return (0);
}

