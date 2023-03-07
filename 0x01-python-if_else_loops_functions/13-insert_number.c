#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a node into a sorted linked list
 * @head: head of linked list
 * @number: integer for n member of inserted node
 * Return: address of inserted node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *prev, *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	prev = tmp;
	tmp = tmp->next;
	while (tmp != NULL)
	{
		if (number < tmp->n)
		{
			prev->next = new;
			new->next = tmp;
			return (new);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	if (prev)
	{
		prev->next = new;
		new->next = NULL;
		return (new);
	}

	return (NULL);
}
