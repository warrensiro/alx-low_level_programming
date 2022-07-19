#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_listint - free memory allocation in this list
 * @head: the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head);
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
