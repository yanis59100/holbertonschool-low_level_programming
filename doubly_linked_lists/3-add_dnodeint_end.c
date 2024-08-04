#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node in list at end
 * @head: reference to head list
 * @n: value
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tail;

	if (head)
	{
		node = malloc(sizeof(*node));
		if (node)
		{
			node->n = n;
			node->prev = NULL;
			node->next = NULL;
			if (*head == NULL)
			{
				*head = node;
				return (node);
			}
			else
			{
				tail = *head;
				while (tail->next)
					tail = tail->next;
				tail->next = node;
				node->prev = tail;
				return (node);
			}
		}
		return (NULL);
	}
	return (NULL);
}
