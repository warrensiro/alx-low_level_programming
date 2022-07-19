#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - check code to add node at end
 * @head: name of the list
 * @n: number in list
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *point;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	point = *head;
	while (point->next)
	{
		point = point->next;
	}
	pointer->next = add;
	return (add);
}
