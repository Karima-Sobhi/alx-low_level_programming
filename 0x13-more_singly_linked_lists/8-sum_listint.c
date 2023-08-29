#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list.
 * @head: list's head
 * Return: sum of all the data (n) of a list.
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
