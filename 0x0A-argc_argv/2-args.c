#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * @argc: the number of command line arguments
 * @argv: an array being reffered to by argc
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int state;
	for (state = 0; state < argc; state++)
	{
		printf("%s\n", argv[state]);
	}
	return (0);
}
