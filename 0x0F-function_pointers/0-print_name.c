#include "main.h"
#include <stdio.h>
/**
 * print_name - check code for name
 * @name: name of the person
 * @f: to print the name as is
 *
 * Return: always success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
