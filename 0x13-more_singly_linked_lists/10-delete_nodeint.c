#include <stdlib.h>
#include <string.h>
#include <lists.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node at index list
 * @head: pointer to first node in list
 * @index: index of the list
 *
 * Return: value of node index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *tmp_node = *head;	
	listint_t *after_node;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp_node = (*head)->next;
		free(*head);
		*head = tmp_node;
		return (1);
	}

	while (z < index - 1)
	{
		tmp_node = tmp_node->next;
		++z;
		if (!tmp_node)
		{
			return (-1);
		}
	}
	after_node = tmp_node->next->next;
	free(tmp_node->next);
	tmp_node->next = after_node;
	return (1);
}
