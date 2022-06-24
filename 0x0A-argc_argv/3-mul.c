#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print code for two numbers
 * @argc: number of command line arguments
 * @argv: array of arguments reffered to by argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("syntax\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
