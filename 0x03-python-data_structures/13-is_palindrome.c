#include "lists.h"

/**
 * is_palindrome - checks whether a linked list is a palindrome
 * @head: pointer to pointer to the head of a linked list
 * Return: 1 if linked list is a palindrome
 *         0 if otherwise
 */

int is_palindrome(listint_t **head)
{
	listint_t *first, *last, *tmp;

	first = last = tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp)
		last = tmp;
	while (first != last)
	{
		if (first->n == last->n)
		{
			if (first->next == last)
				break;
			first = first->next;
			tmp = first;
			while (tmp->next != last)
				tmp = tmp->next;
			last = tmp;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
