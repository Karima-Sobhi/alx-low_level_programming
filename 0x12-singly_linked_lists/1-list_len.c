#include "lists.h"

/**
 * list_len - function that returns number of elements of a list_t list.
 * @h: head of list
 * Return: total number of lists in the list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
