#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list.
 * @head: head of list
 * @str: string  needs to be duplicated
 * Return: total number of lists in the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->len = str_len;
	newNode->str = strdup(str);
	newNode->next = NULL;

	currentNode = (*head);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (currentNode->next)
		currentNode = currentNode->next;

	currentNode->next = newNode;
	return (newNode);
}
