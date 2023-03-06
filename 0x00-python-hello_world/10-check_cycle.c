#include "lists.h"

/**
 * check_cycle - checks if a linked list has a cycle or not
 * @list: linked list head
 * Return: 1 if it has a cycle
 *         0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *tmp, *step;

	tmp = step = list;
	while (tmp && step && step->next)
	{
		tmp = tmp->next;
		step = step->next->next;
		if (tmp == step)
			return (1);
	}
	return (0);
}
