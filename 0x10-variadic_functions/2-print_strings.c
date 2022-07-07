#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int z;
	char *strg;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(string, n);

	for (z = 0; z < n; z++)
	{
		strg = va_arg(string, char *);
		if (strg == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
