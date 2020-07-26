#include "lists.h"

/**
 * list_len - return the number of elements
 * @h: is a pointer
 *
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
