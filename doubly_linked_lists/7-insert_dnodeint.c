#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: reference to list
 * @idx: index of the new node
 * @n: value in list
 * Return: node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *runner;
	unsigned int r_idx = 0;

	if (h)
	{
		node = malloc(sizeof(*node));
		if (node)
		{
			node->prev = NULL;
			node->next = NULL;
			node->n = n;
			for (runner = *h; r_idx < idx; r_idx++)
			{
				runner = runner->next;
				if (!runner)
				{
					free(node);
					return (NULL);
				}
			}
			if (runner == NULL)
			{
				*h = node;
				return (node);
			}
			node->next = runner->next;
			node->prev = runner;
			runner->next = node;
			if (node->next)
			{
				runner = node->next;
				runner->prev = node;
			}
			return (node);
		}
		return (NULL);
	}
	return (NULL);
}
