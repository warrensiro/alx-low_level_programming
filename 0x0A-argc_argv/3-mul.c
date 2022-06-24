#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: the number of command line argv
 * @argv: array being reffered to by argc
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num;
	if (argc == 3)
	{
		num *= atoi(argv[argc - 2]);
		num *= atoi(argv[argc - 1]);
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
