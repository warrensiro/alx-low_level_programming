#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sum of data in list
 * @head: beginning node of the list
 *
 * Return: the node
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;
	listint_t *node_index = head;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		count += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (count);
}
