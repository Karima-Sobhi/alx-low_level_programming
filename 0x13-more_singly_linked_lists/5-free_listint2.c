#include "lists.h"

/**
 * free_listint2 - that frees a list.
 * The function sets the head to NULL
 * @head: list's head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
