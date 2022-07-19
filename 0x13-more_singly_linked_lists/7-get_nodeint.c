#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - get node number in list
 * @head: pointer to first node
 * @index: number of index
 *
 * Return: nth value of the node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *node_index = head;

	if (head == NULL)
	{
		return (0);
	}

	while (z < index)
	{
		if (head == NULL)
			return (NULL);
		node_index = head->next;
		head = node_index;
		++z;
	}
	return (node_index);
}
