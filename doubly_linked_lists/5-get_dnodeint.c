#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: list
 * @index: node index
 * Return: index of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int l_idx;
	if (head)
	{
		for (l_idx = 0; l_idx < index; l_idx++)
		{
			head = head->next;
			if (!head)
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
