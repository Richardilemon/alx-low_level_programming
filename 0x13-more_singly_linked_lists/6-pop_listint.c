#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to the first element of the list
 *
 * Return: the data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return (0);

	current_node = *head;
	data = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (data);
}
