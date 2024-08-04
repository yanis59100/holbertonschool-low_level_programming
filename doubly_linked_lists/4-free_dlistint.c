#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *runner;
	dlistint_t *tmp;

	runner = head;
	while (runner)
	{
		tmp = runner;
		runner = runner->next;
		free(tmp);
	}
	free(runner);
}
