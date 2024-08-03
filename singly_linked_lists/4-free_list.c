#include "lists.h"

/**
 * free_list - destroy list
 * @head: list header
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
}
