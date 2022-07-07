#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - ...
 * @op: ...
 * @f: ...
 */
typedef struct format
{
	char *op;
	void (*f)(va_list all);
} f;
#endif
