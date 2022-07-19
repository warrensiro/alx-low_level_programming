#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes head node
 * @head: first in the list
 *
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_node;

	return (value);
}
