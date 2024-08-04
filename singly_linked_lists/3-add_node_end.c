#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: node guide
 * @str: text input
 * Return: list_t
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *count;
	int sizeStr = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[sizeStr])
		sizeStr++;

	count = malloc(sizeof(list_t));

	if (count == NULL)
		return (NULL);

	count->str =  strdup(str);
	count->len = sizeStr;

	if (*head == NULL)
	{
		*head = count;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = count;
	return (count);
}
