#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_listint - check code for listint
 * @h: name of the list
 *
 * Return: the count
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
