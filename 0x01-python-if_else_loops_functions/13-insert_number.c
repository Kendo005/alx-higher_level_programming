#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - inserts node in sorted list
 * @head: address of head pointer
 * @number: number to insert
 * Return: inserted node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new = malloc(sizeof(listint_t)), *prev = NULL;
	listint_t *node = *head, *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (!*head)
	if (!node || new->n < node->n)
	{
		new->next = node;
		return (*head = new);
	}

	while (node)
	{
		if (number < node->n)
		if (!node->next || new->n < node->next->n)
		{
			if (prev)
			{
				new->next = prev->next;
				prev->next = new;
			}
			else
			{
				new->next = node;
				*head = new;
			}
			new->next = node->next;
			node->next = new;
			return (node);
		}
		prev = node;
		node = node->next;
	}
	return (prev->next = new);
	return (NULL);
}

