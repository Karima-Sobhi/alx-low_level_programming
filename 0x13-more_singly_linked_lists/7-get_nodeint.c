#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list.
 * @head: list's head
 * @index: ....
 * Return: get_nodeint_at_index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		current = current->next;
		i++;
	}
	if (i == index && current)
		return (current);

	return (NULL);
}
