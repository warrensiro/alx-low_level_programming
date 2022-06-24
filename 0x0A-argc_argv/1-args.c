#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * @argc: number of command line arguments
 * @argv: the array referred to by argc
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num;
	(void)argv;
	for (num = 0; num < argc; num++)
	{
		if (num + 1 == argc)
			printf("%d\n", num);
	}
	return (0);
}
