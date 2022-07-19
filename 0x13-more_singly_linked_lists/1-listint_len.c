#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * listint _len - check code to validate elements
 * @h: name of the list
 *
 * Return: elements in the list
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
