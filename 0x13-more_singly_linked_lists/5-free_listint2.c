#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * free_listint2 - code to realease memory alloted for this lidt
 * @head: first node in this list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *point;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		point = (*head)->next;
		free(*head);
		*head = point;
	}
}
