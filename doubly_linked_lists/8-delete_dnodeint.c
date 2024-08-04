#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list
 * @index: index to insert value
 * Return: 1 (Success), -1 (Failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *runner;
	dlistint_t *tmp;
	unsigned int r_idx;

	if (head)
	{
		if (!*head)
			return (-1);
		runner = *head;
		for (r_idx = 0; r_idx < index; r_idx++)
		{
			runner = runner->next;
			if (!runner)
				return (-1);
		}
		if (!runner->prev && !runner->next)
		{
			free(runner);
			*head = NULL;
			return (1);
		}
		tmp = runner->prev;
		if (!tmp)
		{
			*head = runner->next;
			(*head)->prev = NULL;
			free(runner);
			return (1);
		}
		tmp->next = runner->next;
		tmp = tmp->next;
		if (tmp)
			tmp->prev = runner->prev;
		free(runner);
		return (1);
	}
	return (-1);
}
