#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - sum values of the list
 * @head: pointer to first node
 * @idx: index of the list
 * @n: value of the number
 *
 * Return: value of node index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z = 1;
	listint_t *index_node = *head;
	listint_t *insert;
	listint_t *h = *head;

	if (head == NULL)
	{
		return (0);
	}

	while (z < idx)
	{
		index_node = (*head)->next;
		*head = index_node;
		++z;
	}
	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
	{
		return(0);
	}
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else
	{
		insert->next = (*head)->next;
		(*head)->next = insert;
		*head = h;
	}
	return (insert);
}
