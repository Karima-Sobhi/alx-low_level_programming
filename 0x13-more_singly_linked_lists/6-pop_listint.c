#include "lists.h"

/**
 * pop_listint - that deletes the head node of alinked list
 * The function sets the head to NULL
 * @head: list's head
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
