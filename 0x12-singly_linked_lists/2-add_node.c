#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list.
 * @head: head of list
 * @str: string  needs to be duplicated
 * Return: total number of lists in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->next = (*head);
	newNode->len = str_len;

	(*head) = newNode;

	return (*head);

}
