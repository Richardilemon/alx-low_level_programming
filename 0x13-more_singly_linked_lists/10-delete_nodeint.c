#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current_node->next == NULL)
			return (-1);
		previous_node = current_node;
		current_node = current_node->next;
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
