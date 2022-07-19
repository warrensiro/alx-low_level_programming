#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - check code
 * @head: name of the list
 * @n: number on list
 *
 * Return: number of the nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
