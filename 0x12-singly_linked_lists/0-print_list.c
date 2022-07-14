#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - check code
 * @h: the lists name
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i} %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
