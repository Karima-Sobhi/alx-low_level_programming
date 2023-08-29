#include "lists.h"

/**
 * pop_listint - that deletes the head node of alinked list
 * The function sets the head to NULL
 * @head: list's head
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
