#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: list's head
 * @n: n value of list
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;

	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;

	return (newNode);
}
