#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - check code
 * @h: name of list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
