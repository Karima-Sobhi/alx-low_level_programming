#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: list's head
 * @idx: index to insert in
 * @n: value of n to be stored
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = new;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	while (i < idx && currentNode)
	{
		if (i == (idx - 1))
		{
			newNode->next = currentNode->next;
			currentNode->next = newNode;
			return (newNode);
		}
		else
			currentNode = currentNode->next;
		i++;
	}
	return (NULL);
}
