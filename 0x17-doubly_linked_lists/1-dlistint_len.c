#include "lists.h"
/**
 * dlistint_len - count number of elements in the list
 * @h: the double linked list
 *
 * Return: Number of elements in the double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
