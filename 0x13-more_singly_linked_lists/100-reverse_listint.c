#include "lists.h"

/**
 * reverse_listint - function that reverses a list.
 * @head: list's head.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind = NULL;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;
	return (*head);
}
