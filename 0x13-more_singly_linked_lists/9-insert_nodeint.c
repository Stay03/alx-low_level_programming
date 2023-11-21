#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -
 * inserts a new node at a given position in a listint_t linked list
 * @head: double pointer to the head of the list
 * @idx: index at which the new node should be inserted
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new_node;
	unsigned int count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL && idx > 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}

