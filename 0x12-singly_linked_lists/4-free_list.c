#include "lists.h"

/**
 * free_list - frees a list
 * @head: list's head
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head->next)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
